// Factory
function criarCarro (nome, marca, ano, kilometragem){
    let carro = {
        Modelo : nome,
        Fabricante : marca,
        Data_Fabricassao : ano,
        Km_Rodados : kilometragem
    }
    return carro
}

let meuCarro = criarCarro('GTR Skyline', 'Nissan', 1998, 350000 )
meuCarro.cor = 'Azul'
console.log(meuCarro)
console.log("Caramba ! Voce tem um", meuCarro.Fabricante, meuCarro.Modelo, ".\nA kilometragem ta no ", meuCarro.Km_Rodados, "feito em", meuCarro.Data_Fabricassao)

let carroPaulo = criarCarro('Ka', 'Ford', 2009, 500000)

console.log("O Paulo tem um", carroPaulo.Fabricante, carroPaulo.Modelo, 'de', carroPaulo.Data_Fabricassao, 'com', carroPaulo.Km_Rodados)