import java.util.Scanner;

public class Soma_Matrizes {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Quantas linhas vai ter cada matriz? ");
        int m = s.nextInt();

        System.out.print("Quantas colunas vai ter cada matriz? ");
        int n = s.nextInt();

        int matA[][] = new int[m][n];
        int matB[][] = new int[m][n];
        int matS[][] = new int[m][n];

        System.out.println("Digite os elementos da matriz A:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("Elemento [" + i + "][" + j + "]: ");
                matA[i][j] = s.nextInt();
            }
        }

        System.out.println("Digite os valores da matriz B:");
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("Elemento [" + i + "][" + j + "]: ");
                matB[i][j] = s.nextInt();
            }
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                matS[i][j] = matA[i][j] + matB[i][j];
            }
        }

        System.out.println("MATRIZ SOMA:");

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print(matS[i][j] + " ");
            }
            System.out.println();
        }

        s.close();

    }
}