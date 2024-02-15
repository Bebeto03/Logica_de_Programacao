import java.util.Scanner;

public class Cada_Linha {

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

        int maior[] = new int[n];

        for (int i = 0; i < n; i++) {
            maior[i] = mat[i][0];
            for (int j = 0; j < n; j++) {
                if (mat[i][j] > maior[i]) {
                    maior[i] = mat[i][j];
                }
            }
        }

        System.out.println("MAIOR ELEMENTO DE CADA LINHA:");

        for (int i = 0; i < n; i++) {
            System.out.println(maior[i]);
        }

        s.close();

    }
}