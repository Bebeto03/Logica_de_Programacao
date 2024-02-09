import java.util.Scanner;

public class Tabuada {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Deseja a tabuada para qual valor? ");
		int n = s.nextInt();
		
		for(int i=1;i<=10;i++) {
			System.out.println(n + " x " + i + " = " + (n*i));
		}
		
		s.close();
		
	}

}
