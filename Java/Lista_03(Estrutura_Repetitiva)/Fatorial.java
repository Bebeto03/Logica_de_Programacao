import java.util.Scanner;

public class Fatorial {

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite o valor de N: ");
		int n = s.nextInt();
		
		int fat = 1;
		
		if(n==0 || n==1) {
			System.out.println("FATORIAL = 1");
		}
		else {
			for(int i=1;i<=n;i++) {
				fat*=i;
			}
			System.out.println("FATORIAL = " + fat);
		}
		
		s.close();

	}

}
