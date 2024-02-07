import java.util.Locale;
import java.util.Scanner;

public class Idades {
	
	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.println("Dados da primeira pessoa:");
		System.out.print("Nome: ");
		String nome1 = s.nextLine();
		System.out.print("Idade: ");
		int idade1 = s.nextInt();
		
		System.out.println("Dados da segunda pessoa:");
		System.out.print("Nome: ");
		s.nextLine();
		String nome2 = s.nextLine();
		System.out.print("Idade: ");
		int idade2 = s.nextInt();
		
		double media = (idade1+idade2)/2.0;
		
		System.out.printf("A idade media de %s e %s é de %.1f anos", nome1, nome2, media);
		
		s.close();
		
	}
}
