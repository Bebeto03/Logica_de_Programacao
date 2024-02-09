import java.util.Locale;
import java.util.Scanner;

public class Divisao {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Quantos casos voce vai digitar? ");
		int n = s.nextInt();
		
		for(int i=0;i<n;i++) {
			System.out.print("Entre com o numerador: ");
			double num = s.nextDouble();
			System.out.print("Entre com o denominador: ");
			double den = s.nextDouble();
			
			if(den==0) {
				System.out.println("DIVISAO IMPOSSIVEL");
			}
			else {
				double div = num/den;
				Locale.setDefault(Locale.US);
				System.out.printf("DIVISAO = %.2f\n", div);
			}
		}
		
		s.close();
		
	}

}
