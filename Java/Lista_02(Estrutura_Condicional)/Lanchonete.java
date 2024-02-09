import java.util.Locale;
import java.util.Scanner;

public class Lanchonete {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Codigo do produto comprado: ");
		int codigo = s.nextInt();
		
		double preco;
		
		switch(codigo) {
		
		case 1:
			preco = 5.00;
			break;
		case 2:
			preco = 3.50;
			break;
		case 3:
			preco = 4.80;
			break;
		case 4:
			preco = 8.90;
		case 5:
			preco = 7.32;
			break;
		default:
			preco = 0.00;
			break;
			
		}
		
		System.out.print("Quantidade comprada: ");
		int quantidade = s.nextInt();
		
		double aPagar = preco * quantidade;
		
		Locale.setDefault(Locale.US);
		System.out.printf("Valor a pagar = R$ %.2f", aPagar);
		
		s.close();
		
	}

}
