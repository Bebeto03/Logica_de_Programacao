import java.util.Locale;
import java.util.Scanner;

public class Pagamento {

	public static void main(String[] args) {

		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Nome: ");
		String nome = s.nextLine();
		
		System.out.print("Valor por hora: ");
		double valorPorHora = s.nextDouble();
		
		System.out.print("Horas trabalhadas: ");
		int horasTrabalhadas = s.nextInt();
		
		double pagamento = valorPorHora * horasTrabalhadas;
		
		System.out.printf("O pagamento para %s deve ser %.2f", nome, pagamento);
		
		s.close();
		
	}

}
