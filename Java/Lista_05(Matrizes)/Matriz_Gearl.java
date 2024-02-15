import java.util.Locale;
import java.util.Scanner;

public class Matriz_Gearl {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner s = new Scanner(System.in);

        System.out.print("Qual a ordem da matriz? ");
        int n = s.nextInt();

        double mat[][] = new double[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("Elemento [" + i + "][" + j + "]: ");
                mat[i][j] = s.nextDouble();
            }
        }

        double somaP = 0.0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] > 0.0) {
                    somaP += mat[i][j];
                }
            }
        }

        System.out.printf("\nSOMA DOS POSITIVOS: %.1f\n\n", somaP);

        System.out.print("Escolha uma linha: ");
        int l = s.nextInt();

        System.out.print("LINHA ESCOLHIDA:");
        for (int j = 0; j < n; j++) {
            System.out.printf(" %.1f", mat[l][j]);
        }

        System.out.print("\n\nEscolha uma coluna: ");
        int c = s.nextInt();

        System.out.print("COLUNA ESCOLHIDA: ");
        for (int i = 0; i < n; i++) {
            System.out.printf(" %.1f", mat[i][c]);
        }

        System.out.print("\n\nDIAGONAL PRINCIPAL:");
        for (int i = 0; i < n; i++) {
            System.out.printf(" %.1f", mat[i][i]);
        }

        System.out.println("\n");

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] < 0) {
                    mat[i][j] = Math.pow(mat[i][j], 2);
                }
            }
        }

        System.out.println("MATRIZ ALTERADA:");

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.printf("%.1f  ", mat[i][j]);
            }
            System.out.println();
        }

        s.close();

    }
}