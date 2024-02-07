import java.util.Locale;
import java.util.Scanner;

public class Troco {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Preco unitario do produto: ");
		double precoUnitario = s.nextDouble();
		
		System.out.print("Quantidade comprada: ");
		int quantidade = s.nextInt();
		
		System.out.print("Dinheiro recebido: ");
		double dinheiroRecebido = s.nextDouble();
		
		double troco = dinheiroRecebido - (quantidade*precoUnitario);
		
		System.out.printf("TROCO = %.2f", troco);
		
		s.close();
		
	}

}
