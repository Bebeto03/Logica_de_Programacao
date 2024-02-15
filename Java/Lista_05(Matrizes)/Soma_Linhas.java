import java.util.Locale;
import java.util.Scanner;

public class Soma_Linhas {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner s = new Scanner(System.in);

        System.out.print("Qual a quantidade de linhas da matriz? ");
        int m = s.nextInt();

        System.out.print("Qual a quantidade de colunas da matriz? ");
        int n = s.nextInt();

        double mat[][] = new double[m][n];

        for (int i = 0; i < m; i++) {
            System.out.println("Digite os elementos da " + (i + 1) + "a. linha:");
            for (int j = 0; j < n; j++) {
                mat[i][j] = s.nextDouble();
            }
        }

        double vet[] = new double[m];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                vet[i] += mat[i][j];
            }
        }

        System.out.println("VETOR GERADO:");

        for (int i = 0; i < vet.length; i++) {
            System.out.printf("%.1f\n", vet[i]);
        }

        s.close();

    }
}