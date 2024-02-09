import java.util.Scanner;

public class Pares_Consecutivos {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite um numero inteiro: ");
		int x = s.nextInt();
		
		int soma = 0;
		
		while(x!=0) {
			if(x%2==0) {
				soma = 5*x + 20;
			}
			else {
				soma = 5*x+25;
			}
			
			System.out.println("SOMA = " + soma);
			
			System.out.print("Digite um numero inteiro: ");
			x = s.nextInt();
		}
		
		s.close();
		
	}

}
