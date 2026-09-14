package Java.projeto03;

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        
        // Arrays
        String[] listaCompras = {"Maçã", "Leite", "Suco"};
        int[] quantia = {7, 2, 1};
        double[] valor = {2.00, 5.50, 8.90};
        boolean[] acabou = {false, true, true};

        System.out.println(Arrays.toString(listaCompras));

        // For
        for (int i = 0; i < 3; i++){
            System.out.println("Item : " + listaCompras[i]);
            System.out.println("Precisa comprar : " + quantia[i]);
            System.out.println("O valor é : " + valor[i]);
            if (acabou[i] == true){
                System.out.println("Acabou em casa ? : Sim");
            }
            else {
                System.out.println("Acabou em casa ? : Não");
            }
        }


        /*

        while (condiçao){
            ...
        }


        switch (variavel){

            case 1:
                break;

            case 2:
                break;

            default:
                ...
        }

         */
    }
}
