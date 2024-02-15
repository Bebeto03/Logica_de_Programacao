import java.util.Scanner;

public class Acima_Diagonal {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Qual a ordem da matriz? ");
        int n = s.nextInt();

        int mat[][] = new int[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("Elemento [" + i + "][" + j + "]: ");
                mat[i][j] = s.nextInt();
            }
        }

        int soma = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j > i) {
                    soma += mat[i][j];
                }
            }
        }

        System.out.print("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL: " + soma);

        s.close();

    }
}