import java.util.Locale;
import java.util.Scanner;

public class Media_Pares {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Quantos elementos vai ter o vetor? ");
        int n = s.nextInt();

        int vet[] = new int[n];

        for (int i = 0; i < vet.length; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = s.nextInt();
        }

        int soma = 0, cont = 0;

        for (int i = 0; i < vet.length; i++) {
            if (vet[i] % 2 == 0) {
                soma += vet[i];
                cont++;
            }
        }

        double media = (double) soma / cont;

        if (cont > 0) {
            Locale.setDefault(Locale.US);
            System.out.printf("MEDIA DOS PARES = %.1f", media);
        } else {
            System.out.println("NENHUM NUMERO PAR");
        }

        s.close();

    }
}