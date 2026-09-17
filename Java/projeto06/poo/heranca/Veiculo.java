package poo.heranca;

public class Veiculo {
    
    String cor;
    String placa;

    public Veiculo(String cor, String placa){
        this.cor = cor;
        this.placa = placa;
    }

    public void acelerar(String veiculo){
        System.out.println(veiculo + " está acelerando");
    }

    public void frear(String veiculo){
        System.out.println(veiculo + " reduziu sua velocidade");
    }

    public void abastecer(String veiculo, String combustivel){
        System.out.println(veiculo + " está abastecendo");
    }

    public void detalhesCarro(String veiculo){
        System.out.println(veiculo + " tem a cor " + cor + ", a plca é " + placa);
    }

    protected void guincho(){
        System.out.println("Chamando guincho");
    }
}
