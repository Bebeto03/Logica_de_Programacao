import java.util.Scanner;

public class Dentro_Fora {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Quantos numeros voce vai digitar? ");
		int n = s.nextInt();
		
		int contD = 0, contF = 0;
		
		for(int i=0;i<n;i++) {
			System.out.print("Digite um numero: ");
			int x = s.nextInt();
			if(x<10 || x>20) {
				contF++;
			}
			else {
				contD++;
			}
		}
		
		System.out.println(contD + " DENTRO");
		System.out.print(contF + " FORA");
		
		s.close();
		
	}

}
