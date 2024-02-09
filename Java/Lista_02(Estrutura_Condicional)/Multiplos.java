import java.util.Scanner;

public class Multiplos {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.println("Digite dois numeros inteiros: ");
		int x = s.nextInt();
		int y = s.nextInt();
		
		if(x%y==0 || y%x==0) {
			System.out.println("Sao multiplos.");
		}
		else {
			System.out.println("Nao sao multiplos.");
		}
		
		s.close();
		
	}

}
