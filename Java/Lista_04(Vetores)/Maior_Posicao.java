import java.util.Locale;
import java.util.Scanner;

public class Maior_Posicao {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner s = new Scanner(System.in);

        System.out.print("Quantos numeros voce vai digitar? ");
        int n = s.nextInt();

        double vet[] = new double[n];

        for (int i = 0; i < vet.length; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = s.nextDouble();
        }

        double maior = vet[0];
        int pos = 0;

        for (int i = 0; i < vet.length; i++) {
            if (vet[i] > maior) {
                maior = vet[i];
                pos = i;
            }
        }

        Locale.setDefault(Locale.US);
        System.out.printf("\nMAIOR VALOR = %.1f\n", maior);
        System.out.print("POSICAO DO MAIOR VALOR = " + pos);

        s.close();

    }
}