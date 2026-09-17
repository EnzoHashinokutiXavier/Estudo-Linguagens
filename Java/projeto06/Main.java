import poo.Carro;
import poo.Moto;

public class Main {
    public static void main(String[] args) {

        Carro carro1 = new Carro("Amarelo", "AAA111");
        carro1.abastecer("carro", "gasolina");

        Moto moto1 = new Moto("Azul", "BBB222");
        moto1.acelerar("Moto");
        moto1.grau();
    }
}