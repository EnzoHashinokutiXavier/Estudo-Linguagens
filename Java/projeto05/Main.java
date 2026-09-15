import poo.Carro;

public class Main {
    public static void main(String[] args) {

        Carro carro1 = new Carro("Azul", "AAA123"); // constructor
        carro1.detalhesCarro(); 
        
        carro1.paisOrigem("Brasil");

        Carro carro2 = new Carro("Amarelo", "BBB321");
        carro2.detalhesCarro();

    }
}