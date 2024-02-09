import java.util.Locale;
import java.util.Scanner;

public class Aumento {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);

		System.out.print("Digite o salario da pessoa: ");
		double salario = s.nextDouble();
		
		double novoSalario;
		int porcentagem;
		
		if(salario<=1000.00) {
			novoSalario = salario + salario*0.2;
			porcentagem = 20;
		}
		else if(salario<=3000.00) {
			novoSalario = salario + salario*0.15;
			porcentagem = 15;
		}
		else if(salario<=8000.00) {
			novoSalario = salario + salario*0.1;
			porcentagem = 10;
		}
		else {
			novoSalario = salario + salario*0.05;
			porcentagem = 5;
		}
		
		Locale.setDefault(Locale.US);
		System.out.printf("Novo salario = R$ %.2f\n", novoSalario);
		System.out.printf("Aumento = R$%.2f\n", novoSalario-salario);
		System.out.println("Porcentagem = " + porcentagem + " %");
		
		s.close();
		
	}

}
