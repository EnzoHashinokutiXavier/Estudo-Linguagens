package poo;

public class Carro {
    // Propriedades | atributos | campos | variaveis de instancia 
    String cor;
    String placa;

    // Método - comportamento, açoes
    public void acelerar(){
        System.out.println("Carro em movimento");
    }

    public void frear(){
        System.out.println("Carro parou");
    }

    public void abastecer(){
        System.out.println("Carro abastecendo");
    }

    // Getters
    public String getCor() {
        return cor;
    }

    public String getPlaca() {
        return placa;
    }

    // Setters
    public void setCor(String cor) {
        this.cor = cor;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

}
