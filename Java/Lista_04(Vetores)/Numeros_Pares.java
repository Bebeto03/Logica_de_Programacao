import java.util.Scanner;

public class Numeros_Pares {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Quantos numeros voce vai digitar? ");
        int n = s.nextInt();

        int vet[] = new int[n];

        for (int i = 0; i < vet.length; i++) {
            System.out.print("Digite um numero: ");
            vet[i] = s.nextInt();
        }

        System.out.println("\nNUMEROS PARES:");

        int cont = 0;

        for (int i = 0; i < vet.length; i++) {
            if (vet[i] % 2 == 0) {
                System.out.print(vet[i] + " ");
                cont++;
            }
        }

        System.out.print("\n\nQUANTIDADE DE PARES: " + cont);

        s.close();

    }
}