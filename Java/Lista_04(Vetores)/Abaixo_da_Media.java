import java.util.Locale;
import java.util.Scanner;

public class Abaixo_da_Media {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner s = new Scanner(System.in);

        System.out.print("Quantos elementos vai ter o vetor? ");
        int n = s.nextInt();

        double vet[] = new double[n];

        for (int i = 0; i < vet.length; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = s.nextDouble();
        }

        double soma = 0.0;

        for (int i = 0; i < vet.length; i++) {
            soma += vet[i];
        }

        double media = soma / vet.length;

        Locale.setDefault(Locale.US);
        System.out.printf("\nMEDIA DO VETOR = %.3f\n", media);

        System.out.println("ELEMENTOS ABAIXO DA MEDIA:");
        for (int i = 0; i < vet.length; i++) {
            if (vet[i] < media) {
                Locale.setDefault(Locale.US);
                System.out.printf("%.1f\n", vet[i]);
            }
        }

        s.close();

    }
}