import java.util.Scanner;

public class Par_Impar {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Quantos numeros voce vai digitar? ");
		int n = s.nextInt();
		
		for(int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			int x = s.nextInt();
			
			if(x%2==0 && x>0) {
				System.out.println("PAR POSITIVO");
			}
			else if(x%2==0 && x<0) {
				System.out.println("PAR NEGATIVO");
			}
			else if(x%2!=0 && x>0) {
				System.out.println("IMPAR POSITIVO");
			}
			else if(x%2!=0 && x<0) {
				System.out.println("IMPAR NEGATIVO");
			}
			else {
				System.out.println("NULO");
			}
		}
		
		s.close();
		
	}

}
