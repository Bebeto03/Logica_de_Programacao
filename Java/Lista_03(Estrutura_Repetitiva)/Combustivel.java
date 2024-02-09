import java.util.Scanner;

public class Combustivel {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Infomre um codigo(1, 2, 3) ou 4 para parar: ");
		int codigo = s.nextInt();
		
		int contA = 0, contG = 0, contD = 0;
		
		while(codigo!=4) {
			switch(codigo) {
			case 1:
				contA++;
				break;
			case 2:
				contG++;
				break;
			case 3:
				contD++;
				break;
			default:
				break;
			}
			
			System.out.print("Informe um codigo(1, 2, 3) ou 4 para parar: ");
			codigo = s.nextInt();
		}
		
		System.out.println("MUITO OBRIGADO");
		
		System.out.println("Alcool: " + contA);
		System.out.println("Gasolina: " + contG);
		System.out.println("Diesel: " + contD);
		
		s.close();
		
	}

}
