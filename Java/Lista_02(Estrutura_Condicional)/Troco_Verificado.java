import java.util.Locale;
import java.util.Scanner;

public class Troco_Verificado {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Preco unitario do produto: ");
		double preco = s.nextDouble();
		
		System.out.print("Quantidade comprada: ");
		int quantidade = s.nextInt();
		
		System.out.print("Dinheiro recebido: ");
		double dinRecebido = s.nextDouble();
		
		double aPagar = preco * quantidade;
		
		if(dinRecebido<aPagar) {
			System.out.printf("DINHEIRO INSUFICIENTE. FALTAM %.2f reais", aPagar-dinRecebido);
		}
		else {
			System.out.printf("TROCO = %.2f", dinRecebido-aPagar);
		}
		
		s.close();
		
	}

}
