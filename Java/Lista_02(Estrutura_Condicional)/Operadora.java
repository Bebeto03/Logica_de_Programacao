import java.util.Locale;
import java.util.Scanner;

public class Operadora {

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite a quantidade de minutos: ");
		int minutos = s.nextInt();
		
		double pagar = 50.00;
		
		if(minutos>100) {
			pagar = pagar + (minutos-100)*2.00;
		}
		
		Locale.setDefault(Locale.US);
		System.out.printf("Valor a pagar: R$ %.2f", pagar);
		
		s.close();
		
	}

}
