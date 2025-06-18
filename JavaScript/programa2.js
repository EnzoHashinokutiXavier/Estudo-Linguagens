
function criarCarro (nome, marca, ano, kilometragem){
    let carro = {
        Modelo : nome,
        Fabricante : marca,
        Data_Fabricassao : ano,
        Km_Rodados : kilometragem
    }
    return carro
}

let meuCarro = criarCarro('Punto', 'Fiat', 2017, 120000 )

console.log(meuCarro)