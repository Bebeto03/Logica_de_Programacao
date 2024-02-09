import java.util.Scanner;

public class Menor_de_Tres {

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		System.out.print("Primeiro valor: ");
		int n1 = s.nextInt();
		
		System.out.print("Segundo valor: ");
		int n2 = s.nextInt();
		
		System.out.print("Terceiro valor: ");
		int n3 = s.nextInt();
		
		if(n1<=n2 && n1<=n3) {
			System.out.println("MENOR = " + n1);
		}
		else if(n2<=n1 && n2<=n3) {
			System.out.println("MENOR = " + n2);
		}
		else {
			System.out.println("MENOR = " + n3);
		}
		
		s.close();

	}

}
