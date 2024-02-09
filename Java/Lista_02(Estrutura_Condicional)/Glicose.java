import java.util.Locale;
import java.util.Scanner;

public class Glicose {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite a medida da glicose: ");
		double glicose = s.nextDouble();
		
		String classificacao;
		
		if(glicose<=100) {
			classificacao = "normal";
		}
		else if(glicose<=140) {
			classificacao = "elevado";
		}
		else {
			classificacao = "diabetes";
		}
		
		System.out.println("Classiciacao: " + classificacao);
		
		s.close();
		
	}

}
