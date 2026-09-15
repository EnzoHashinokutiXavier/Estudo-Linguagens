package poo;

public class Carro {
    // Propriedades | atributos | campos | variaveis de instancia 
    String cor;
    String placa;

    // Variavel de classe : compartilhada com todos objetos, nao ligado ao construtor
    static String pais;

    // Constructor
    public Carro(String cor, String placa){
        this.cor = cor;
        this.placa = placa;

    }

    // Método - comportamento, açoes

    public void paisOrigem(String pais){
        Carro.pais = pais;
    }

    public void detalhesCarro(){
        System.out.println("O carro tem a cor " + cor + ", a plca é " + placa + " e o país de origem é " + pais);
    }

}
