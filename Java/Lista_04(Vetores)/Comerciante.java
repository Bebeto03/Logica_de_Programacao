import java.util.Locale;
import java.util.Scanner;

public class Comerciante {

    public static void main(String[] args) {

        Locale.setDefault(Locale.US);
        Scanner s = new Scanner(System.in);

        System.out.print("Serao digitados dados de quantos produtos? ");
        int n = s.nextInt();

        String nome[] = new String[n];
        double precoCompra[] = new double[n];
        double precoVenda[] = new double[n];

        for (int i = 0; i < nome.length; i++) {
            System.out.println("Produto " + (i + 1) + ":");
            System.out.print("Nome: ");
            nome[i] = s.next();
            System.out.print("Preco de compra: ");
            precoCompra[i] = s.nextDouble();
            System.out.print("Preco de venda: ");
            precoVenda[i] = s.nextDouble();
        }

        int cont1 = 0, cont2 = 0, cont3 = 0;

        for (int i = 0; i < nome.length; i++) {
            if (precoVenda[i] < (precoCompra[i] * 1.1)) {
                cont1++;
            } else if (precoVenda[i] <= (precoCompra[i] * 1.2)) {
                cont2++;
            } else {
                cont3++;
            }
        }

        double somaC = 0, somaV = 0;

        for (int i = 0; i < nome.length; i++) {
            somaC += precoCompra[i];
            somaV += precoVenda[i];
        }

        double lucro = somaV - somaC;

        System.out.println("\nRELATORIO:");

        System.out.println("Lucro abaixo de 10%: " + cont1);
        System.out.println("Lucro entre 10% e 20%: " + cont2);
        System.out.println("Lucro acima de 20%: " + cont3);
        Locale.setDefault(Locale.US);
        System.out.printf("Valor total de compra: %.2f\n", somaC);
        System.out.printf("Valor total de venda: %.2f\n", somaV);
        System.out.printf("Lucro total: %.2f", lucro);

        s.close();

    }
}