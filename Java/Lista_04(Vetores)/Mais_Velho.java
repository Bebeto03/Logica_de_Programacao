import java.util.Scanner;

public class Mais_Velho {
    
    public static void main(String[] args){

        Scanner s = new Scanner(System.in);

        System.out.print("Quantas pessoas voce vai digitar? ");
        int n = s.nextInt();

        String nome[] = new String[n];
        int idade[] = new int[n];

        for(int i=0;i<nome.length;i++){
            System.out.println("Dados da " + (i+1) + "a pessoa:");
            System.out.print("Nome: ");
            nome[i] = s.next();
            System.out.print("Idade: ");
            idade[i] = s.nextInt();
        }

        int maior = idade[0];
        String maisVelho = nome[0];

        for(int i=0;i<nome.length;i++){
            if(idade[i]>maior){
                maior = idade[i];
                maisVelho = nome[i];
            }
        }

        System.out.print("PESSOA MAIS VELHA: " + maisVelho);

        s.close();

    }
}