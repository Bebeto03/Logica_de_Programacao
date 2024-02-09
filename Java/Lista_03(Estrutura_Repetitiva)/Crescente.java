import java.util.Scanner;

public class Crescente {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.println("Digite dois numeros:");
		int x = s.nextInt();
		int y = s.nextInt();
		
		while(x!=y) {
			
			if(x>y) {
				System.out.println("Decrescente!");
			}
			else {
				System.out.println("Crescente!");
			}
			
			System.out.println("Digite outros dois numeros:");
			x = s.nextInt();
			y = s.nextInt();
			
		}
		
		s.close();
		
	}

}
