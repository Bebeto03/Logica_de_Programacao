import java.util.Scanner;

public class Senha_Fixa {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Digite a senha: ");
		int senha = s.nextInt();
		
		while(senha!=2002) {
			System.out.print("Senha invalida! Tente novamente: ");
			senha = s.nextInt();
		}
		
		System.out.print("Acesso permitido!");
		
		s.close();
		
	}

}
