// Constructor
function pedido (tamanho, sabor, nome){
    this.tamanhoSorvete = tamanho;
    this.saborSorvete = sabor;
    this.Cliente = nome
}

let encomenda = new pedido(100, 'chocolate', 'Enzo')

console.log(encomenda)

console.log("Um sorvete de", encomenda.tamanhoSorvete, 'ml, sabor', encomenda.saborSorvete, 'para o', encomenda.Cliente)