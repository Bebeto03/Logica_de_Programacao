import java.util.Locale;
import java.util.Scanner;

public class Experiencias {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Quantos casos de teste serao digitados? ");
		int n = s.nextInt();
		
		int coelho=0, rato=0, sapo=0, total=0;
		
		for(int i=0;i<n;i++) {
			System.out.print("Quantidade de cobaias: ");
			int quant = s.nextInt();
			System.out.print("Tipo de cobaia: ");
			char tipo = s.next().charAt(0);
			
			if(tipo == 'C') {
				coelho+=quant;
			}
			if(tipo == 'R') {
				rato+=quant;
			}
			if(tipo == 'S') {
				sapo+=quant;
			}
			
			total += quant;
		}
		
		System.out.println("\nRELATORIO FINAL:");
		
		System.out.println("Total: " + total + " cobaias");
		System.out.println("Total de coelhos: " + coelho);
		System.out.println("Total de ratos: " + rato);
		System.out.println("Total de sapos: " + sapo);
		Locale.setDefault(Locale.US);
		System.out.printf("Percentual de coelhos: %.2f\n", coelho*100.0/total);
		System.out.printf("Percentual de ratos: %.2f\n", rato*100.0/total);
		System.out.printf("Percentual de sapos: %.2f", sapo*100.0/total);
		
		s.close();
		
	}

}
