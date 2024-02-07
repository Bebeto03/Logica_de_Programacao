import java.util.Locale;
import java.util.Scanner;

public class Medidas {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite a medida A: ");
		double a = s.nextDouble();
		
		System.out.print("Digite a medida B: ");
		double b = s.nextDouble();
		
		System.out.print("Digite a medida C: ");
		double c = s.nextDouble();
		
		double areaQ = Math.pow(a, 2);
		double areaTri = a*b/2;
		double areaTra = ((a+b)*c)/2;
		
		System.out.printf("AREA DO QUADRADO: %.4f\n", areaQ);
		System.out.printf("AREA DO TRIANGULO: %.4f\n", areaTri);
		System.out.printf("AREA DO TRAPEZIO: %.4f", areaTra);
		
		s.close();
		
	}

}
