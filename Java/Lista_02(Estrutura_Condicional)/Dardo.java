import java.util.Locale;
import java.util.Scanner;

public class Dardo {
	
	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.println("Digite as tres distancias:");
		double dist1 = s.nextDouble();
		double dist2 = s.nextDouble();
		double dist3 = s.nextDouble();
		
		double maior;
		
		if(dist1>=dist2 && dist1>=dist3) {
			maior = dist1;
		}
		else if(dist2>=dist1 && dist2>=dist3) {
			maior = dist2;
		}
		else {
			maior = dist3;
		}
		
		System.out.printf("MAIOR DISTANCIA = %.2f", maior);
		
		s.close();
		
	}
}
