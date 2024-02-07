import java.util.Locale;
import java.util.Scanner;

public class Circulo {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite o valor do raio do circulo: ");
		double raio = s.nextDouble();
		
		double area = Math.pow(raio, 2) * Math.PI;
		
		System.out.printf("AREA = %.3f", area);
		
		s.close();
		
	}

}
