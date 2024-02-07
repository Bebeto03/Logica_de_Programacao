import java.util.Scanner;
import java.util.Locale;

public class Retangulo {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Base do retangulo: ");
		double base = s.nextDouble();
		
		System.out.print("Altura do retangulo: ");
		double altura = s.nextDouble();
		
		double area = base * altura;
		double perimetro = 2*base + 2*altura;
		double diagonal = Math.sqrt(Math.pow(base, 2)+Math.pow(altura, 2));
		
		System.out.printf("Area = %.4f\n", area);
		System.out.printf("Perimetro = %.4f\n", perimetro);
		System.out.printf("Diagonal = %.4f", diagonal);
		
		s.close();

	}

}
