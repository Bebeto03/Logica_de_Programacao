import java.util.Locale;
import java.util.Scanner;

public class Temperatura {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Voce vai digitar a temperatura em qual escala (C/F)? ");
		char escala = s.next().charAt(0);
		
		double temp;
		
		if(escala == 'F') {
			System.out.print("Digite a temperatura em Fahrenheit: ");
			temp = s.nextDouble();
			temp = 5*(temp-32)/9;
			System.out.printf("Temperatura equivalente em Celsius: %.2f", temp);
		}
		else if(escala == 'C') {
			System.out.print("Digite a temperatura em Celsius: ");
			temp = s.nextDouble();
			temp = (9*temp + 160)/5;
			System.out.printf("Temperatura equivalente em Fahrenheit: %.2f", temp);
		}
		else {
			System.out.print("ERRO");
		}
		
		s.close();
		
	}

}
