import java.util.Locale;
import java.util.Scanner;

public class Dados_Pessoas {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner s = new Scanner(System.in);

        System.out.print("Quantas pessoas serao digitadas? ");
        int n = s.nextInt();

        double altura[] = new double[n];
        char genero[] = new char[n];

        for (int i = 0; i < altura.length; i++) {
            System.out.print("Altura da " + (i + 1) + "a pessoa: ");
            altura[i] = s.nextDouble();
            System.out.print("Genero da " + (i + 1) + "a pessoa: ");
            genero[i] = s.next().charAt(0);
        }

        double menor = altura[0], maior = altura[0];

        for (int i = 0; i < altura.length; i++) {
            if (altura[i] < menor) {
                menor = altura[i];
            }
            if (altura[i] > maior) {
                maior = altura[i];
            }
        }

        Locale.setDefault(Locale.US);
        System.out.printf("Menor altura = %.2f\n", menor);
        System.out.printf("Maior altura = %.2f\n", maior);

        double somaF = 0;
        int contF = 0;

        for (int i = 0; i < altura.length; i++) {
            if (genero[i] == 'F') {
                somaF += altura[i];
                contF++;
            }
        }

        double mediaF = somaF / contF;

        Locale.setDefault(Locale.US);
        System.out.printf("Media das alturas das mulheres = %.2f\n", mediaF);

        int contM = 0;

        for (int i = 0; i < genero.length; i++) {
            if (genero[i] == 'M') {
                contM++;
            }
        }

        System.out.print("Numero de homens: " + contM);

        s.close();

    }
}