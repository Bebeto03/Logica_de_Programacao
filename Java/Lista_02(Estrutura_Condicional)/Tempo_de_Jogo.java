import java.util.Scanner;

public class Tempo_de_Jogo {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		
		System.out.print("Hora inicial: ");
		int horaI = s.nextInt();
		
		System.out.print("Hora final: ");
		int horaF = s.nextInt();
		
		if(horaF<=horaI) {
			horaF = horaF + 24;
		}
		
		System.out.print("O JOGO DUROU " + (horaF-horaI) + " HORA(S)");
		
		s.close();
		
	}

}
