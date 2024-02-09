import java.util.Locale;
import java.util.Scanner;

public class Validacao_de_Nota {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite a primeira nota: ");
		double nota1 = s.nextDouble();
		
		while(nota1<0 || nota1>10) {
			System.out.print("Valor invalido! Tente novamente: ");
			nota1 = s.nextDouble();
		}
		
		System.out.print("Digite a segunda nota: ");
		double nota2 = s.nextDouble();
		
		while(nota2<0 || nota2>10) {
			System.out.print("Valor invalido! Tente novamente: ");
			nota2 = s.nextDouble();
		}
		
		double media = (nota1+nota2)/2;
		
		System.out.printf("MEDIA = %.2f", media);
		
		s.close();
		
	}

}
