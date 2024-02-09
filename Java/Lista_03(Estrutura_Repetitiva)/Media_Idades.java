import java.util.Locale;
import java.util.Scanner;

public class Media_Idades {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.println("Digite as idades:");
		int idade = s.nextInt();
		
		int soma = 0, cont = 0;
		
		if(idade<0) {
			
			System.out.println("IMPOSSIVEL CALCULAR");
			
		}
		else {
			
			while(idade>=0) {
				
				soma+=idade;
				cont++;
				idade = s.nextInt();
				
			}
			
			double media = (double)soma/cont;
			
			Locale.setDefault(Locale.US);
			System.out.printf("MEDIA = %.2f", media);
			
		}
		
		s.close();
		
	}

}
