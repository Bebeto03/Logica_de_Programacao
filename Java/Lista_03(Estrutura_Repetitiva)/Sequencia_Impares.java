import java.util.Scanner;

public class Sequencia_Impares {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite o valor de X: ");
		int x = s.nextInt();
		
		for(int i=1;i<=x;i++) {
			if(i%2!=0) {
				System.out.println(i);
			}
		}
		
		s.close();
		
	}

}
