import java.util.Locale;
import java.util.Scanner;

public class Consumo {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Distancia percorrida: ");
		double distancia = s.nextDouble();
		
		System.out.print("Combustivel gasto: ");
		double combustivel = s.nextDouble();
		
		double consumoMedio = distancia / combustivel;
		
		System.out.printf("Consumo medio: %.3f", consumoMedio);
		
		s.close();
		
	}

}
