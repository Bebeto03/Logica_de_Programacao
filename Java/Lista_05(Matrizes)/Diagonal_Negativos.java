import java.util.Scanner;

public class Diagonal_Negativos {

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

        System.out.println("DIAGONAL PRINCIPAL:");

        for (int i = 0; i < n; i++) {
            System.out.print(mat[i][i] + " ");
        }

        int contN = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] < 0) {
                    contN++;
                }
            }
        }

        System.out.print("\nQuantidade de negativos = " + contN);

        s.close();

    }
}