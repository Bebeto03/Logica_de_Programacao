import java.util.Locale;
import java.util.Scanner;

public class Coordenadas {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Valor de X: ");
		double x = s.nextDouble();
		
		System.out.print("Valor de Y: ");
		double y = s.nextDouble();
		
		String pos;
		
		if(x>0 && y>0) {
			pos = "Q1";
		}
		else if(x<0 && y>0) {
			pos = "Q2";
		}
		else if(x<0 && y<0) {
			pos = "Q3";
		}
		else if(x>0 && y<0) {
			pos = "Q4";
		}
		else if(x!=0 && y==0) {
			pos = "Eixo X";
		}
		else if(x==0 && y!=0) {
			pos = "Eixo Y";
		}
		else {
			pos = "Origem";
		}
		
		System.out.println(pos);
		
		s.close();
		
	}

}
