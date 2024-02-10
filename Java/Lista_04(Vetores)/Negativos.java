import java.util.Scanner;

public class Negativos {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);

		System.out.print("Quantos numeros voce vai digitar? ");
		int n = s.nextInt();

		int vet[] = new int[n];

		for (int i = 0; i < n; i++) {
			System.out.print("Digite um numero: ");
			vet[i] = s.nextInt();
		}

		System.out.println("NUMEROS NEGATIVOS:");

		for (int i = 0; i < n; i++) {
			if (vet[i] < 0) {
				System.out.println(vet[i]);
			}
		}

		s.close();

	}
}