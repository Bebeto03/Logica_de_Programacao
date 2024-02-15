import java.util.Scanner;

public class Negativos_Matriz {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Qual a quantidade de linhas da matriz? ");
        int m = s.nextInt();

        System.out.print("Qual a quantidade de colunas da matriz? ");
        int n = s.nextInt();

        int mat[][] = new int[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                System.out.print("Elemento [" + i + "][" + j + "]: ");
                mat[i][j] = s.nextInt();
            }
        }

        System.out.println("VALORES NEGATIVOS:");

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] < 0) {
                    System.out.println(mat[i][j]);
                }
            }
        }

        s.close();

    }
}