package poo;

import poo.heranca.Veiculo;

public class Carro extends Veiculo{
    
    public Carro(String cor, String placa){
        super(cor, placa);
    }
    
    public void revisao(){
        System.out.println("Encontramos um problema !");
        manutencao();
    }

    private void manutencao(){
        System.out.println("fazendo manutenção");
    }
}
