import java.util.Scanner;

public class Main{
    public static void main(String[] args) {

        // Tipo de dado + identificação + valor atribuido
        String nome = "Enzo";
        System.out.println(nome);

        // Declarar variavel sem definir tipo previamente
        var sobrenome = "Xavier";
        System.out.println(sobrenome);

        // Valores imutaveis = constantes
        final String NOME = "Joao";
        System.out.println(NOME);

        // Contatenaçao
        System.out.println("Meu nome é " + nome + " " + sobrenome);

        // Entrada do usuário
        try (Scanner entradaUsuario = new Scanner(System.in)){
            System.out.println("Qual é o seu nome ? ");
            nome = entradaUsuario.nextLine();
            System.out.println("Ola " + entradaUsuario);
            System.out.println("Qual é a sua idade ? ");
            Byte idade = entradaUsuario.nextByte();
            if (idade >= 18){
                System.out.println("Você é maior de idade !");
            }
            else {
                System.out.println( "Você é menor de idade");
            }
            String idadeString = idade.toString();
            System.out.println("Sua idade é " + idadeString);
        }
    }
}