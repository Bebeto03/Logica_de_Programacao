import java.util.Scanner;
import java.util.Locale;

public class Terreno {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite a largura do terreno: ");
		double largura = s.nextDouble();
		
		System.out.print("Digite o comprimento do terreno: ");
		double comprimento = s.nextDouble();
		
		System.out.print("Digite o valor do metro quadrado: ");
		double valorMetroQuadrado = s.nextDouble();
		
		double area = largura * comprimento;
		double preco = area * valorMetroQuadrado;
		
		System.out.printf("Area do terreno = %.2f\n", area);
		System.out.printf("Preco do terreno = %.2f", preco);
		
		s.close();

	}

}
