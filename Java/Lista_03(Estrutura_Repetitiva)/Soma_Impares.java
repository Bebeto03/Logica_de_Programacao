import java.util.Scanner;

public class Soma_Impares {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.println("Digite dois numeros:");
		int x = s.nextInt();
		int y = s.nextInt();
		
		if(x>y) {
			int z = x;
			x = y;
			y = z;
		}
		
		int soma = 0;
		
		for (int i=x+1;i<y;i++) {
			if(i%2!=0) {
				soma+=i;
			}
		}
		
		System.out.println("SOMA DOS IMPARES = " + soma);
		
		s.close();
		
	}

}
