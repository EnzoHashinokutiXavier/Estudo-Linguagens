import poo.Carro;

public class Main {
    public static void main(String[] args) {

        Carro carro = new Carro(); 

        // Metodos
        carro.acelerar();
        carro.frear();
        carro.abastecer();

        // Setters
        carro.setCor("Azul");
        carro.setPlaca("AAA123");

        // Getters
        System.out.println("Cor : " +  carro.getCor());
        System.out.println("Placa : " + carro.getPlaca());
    }
}