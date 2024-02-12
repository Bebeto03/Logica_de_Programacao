import java.util.Scanner;

public class Soma_Vetores {

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Quantos valores vai ter cada vetor? ");
        int n = s.nextInt();

        int vetA[] = new int[n];

        System.out.println("Digite os valores do vetor A:");
        for (int i = 0; i < vetA.length; i++) {
            vetA[i] = s.nextInt();
        }

        int vetB[] = new int[n];

        System.out.println("Digite os valores do vetor B:");
        for (int i = 0; i < vetB.length; i++) {
            vetB[i] = s.nextInt();
        }

        int vetC[] = new int[n];

        for (int i = 0; i < vetC.length; i++) {
            vetC[i] = vetA[i] + vetB[i];
        }

        System.out.println("VETOR RESULTANTE:");

        for (int i = 0; i < vetC.length; i++) {
            System.out.println(vetC[i]);
        }

        s.close();

    }
}