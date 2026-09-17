package poo;

import poo.heranca.Veiculo;

public class Moto extends Veiculo{
    
    public Moto(String cor, String placa){
        super(cor, placa);
    }

    public void grau(){
        System.out.println("Oia o grau randandandandan");
    }
}
