import java.util.Scanner;

public class Soma {
	
	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite o valor de X: ");
		int x = s.nextInt();
		
		System.out.print("Digite o valor de Y: ");
		int y = s.nextInt();
		
		int soma = x + y;
		
		System.out.println("SOMA = " + soma);
		
		s.close();
		
	}
}
