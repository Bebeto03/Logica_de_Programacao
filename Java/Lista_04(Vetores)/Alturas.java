import java.util.Scanner;
import java.util.Locale;

public class Alturas {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner s = new Scanner(System.in);

        System.out.print("Quantas pessoas serao digitadas? ");
        int n = s.nextInt();

        String nome[] = new String[n];
        int idade[] = new int[n];
        double altura[] = new double[n];

        for (int i = 0; i < nome.length; i++) {
            System.out.println("Dados da " + (i + 1) + "a pessoa:");
            System.out.print("Nome: ");
            s.nextLine();
            nome[i] = s.nextLine();
            System.out.print("Idade: ");
            idade[i] = s.nextInt();
            System.out.print("Altura: ");
            altura[i] = s.nextDouble();
        }

        double soma = 0;

        for (int i = 0; i < altura.length; i++) {
            soma += altura[i];
        }

        double media = soma / altura.length;

        System.out.printf("Altura media: %.2f\n", media);

        int cont = 0;

        for (int i = 0; i < idade.length; i++) {
            if (idade[i] < 16) {
                cont++;
            }
        }

        double por = cont * 100 / idade.length;

        System.out.printf("Pessoas com menos de 16 anos: %.1f %%\n", por);

        for (int i = 0; i < idade.length; i++) {
            if (idade[i] < 16) {
                System.out.println(nome[i]);
            }
        }

        s.close();

    }
}