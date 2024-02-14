import java.util.Locale;
import java.util.Scanner;

public class Aprovados {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner s = new Scanner(System.in);

        System.out.print("Quantos alunos serao digitados? ");
        int n = s.nextInt();

        String nome[] = new String[n];
        double nota1[] = new double[n];
        double nota2[] = new double[n];

        for (int i = 0; i < nome.length; i++) {
            System.out.println("Digite nome, primeira e segunda nota do " + (i + 1) + "o aluno:");
            s.nextLine();
            nome[i] = s.nextLine();
            nota1[i] = s.nextDouble();
            nota2[i] = s.nextDouble();
        }

        double media[] = new double[n];

        for (int i = 0; i < nome.length; i++) {
            media[i] = (nota1[i] + nota2[i]) / 2;
        }

        System.out.println("Alunos aprovados:");

        for (int i = 0; i < nome.length; i++) {
            if (media[i] >= 6.0) {
                Locale.setDefault(Locale.US);
                System.out.println(nome[i]);
            }
        }

        s.close();

    }
}