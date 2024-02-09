import java.util.Locale;
import java.util.Scanner;

public class Media_Ponderada {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Quantos casos voce vai digitar? ");
		int n = s.nextInt();
		
		for(int i=0;i<n;i++) {
			System.out.println("Digite tres numeros:");
			double nota1 = s.nextDouble();
			double nota2 = s.nextDouble();
			double nota3 = s.nextDouble();
			
			double soma = 2*nota1 + 3*nota2 + 5*nota3;
			double media = soma/10;
			
			System.out.printf("MEDIA = %.1f\n", media);
		}
		
		s.close();
		
	}

}
