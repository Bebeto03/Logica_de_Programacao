import java.util.Locale;
import java.util.Scanner;

public class Soma_Vetor {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner s = new Scanner(System.in);

        System.out.print("Quantos numeros voce vai digitar? ");
        int n = s.nextInt();

        double vet[] = new double[n];

        for (int i = 0; i < n; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = s.nextDouble();
        }

        System.out.print("\nVALORES: ");

        for (int i = 0; i < n; i++) {
            System.out.printf("%.2f ", vet[i]);
        }

        double soma = 0;

        for (int i = 0; i < n; i++) {
            soma += vet[i];
        }

        System.out.printf("\nSOMA = %.2f\n", soma);

        double media = soma / n;

        System.out.printf("MEDIA = %.2f", media);

        s.close();

    }
}