import java.util.Locale;
import java.util.Scanner;

public class Quadrante {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.println("Digite os valores das coordenadas X e Y:");
		double x = s.nextDouble();
		double y = s.nextDouble();
		
		while(x!=0 && y!=0) {
			if(x>0 && y>0) {
				System.out.println("QUADRANTE Q1");
			}
			else if(x<0 && y>0) {
				System.out.println("QUADRANTE Q2");
			}
			else if(x<0 && y<0) {
				System.out.println("QUADRANTE Q3");
			}
			else {
				System.out.println("QUADRANTE Q4");
			}
			
			System.out.println("Digite os valores ds coordenadas X e Y:");
			x = s.nextDouble();
			y = s.nextDouble();
		}
		
		s.close();
		
	}

}
