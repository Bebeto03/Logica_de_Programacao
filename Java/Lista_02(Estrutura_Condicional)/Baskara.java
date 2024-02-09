import java.util.Locale;
import java.util.Scanner;

public class Baskara {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Coeficiente A: ");
		double a = s.nextDouble();
		
		System.out.print("Coeficiente B: ");
		double b = s.nextDouble();
		
		System.out.print("Coeficiente C: ");
		double c = s.nextDouble();
		
		double delta = Math.pow(b, 2) - 4*a*c;
		
		double x1 = (-b + Math.sqrt(delta)) / (2*a);
		double x2 = (-b - Math.sqrt(delta)) / (2*a);
		
		if(delta<0) {
			System.out.println("Esta equacao nao possui raizes reais.");
		}
		else if(delta==0) {
			System.out.printf("X = %.4f", x1);
		}
		else {
			System.out.printf("X1 = %.4f\n", x1);
			System.out.printf("X2 = %.4f", x2);
		}
		
		s.close();
		
	}

}
