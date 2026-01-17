
let palavra = String(prompt('Digite seu nome :'))

if (palavra == 'Enzo' || palavra == 'enzo'){
    document.getElementById('nome').innerHTML = 'eu mesmo'
}

else{
    document.getElementById('nome').innerHTML = palavra
}

let idade = Number(prompt('Digite sua idade'))

if (idade >= 18 && idade < 90){
    document.getElementById('maioridade').innerHTML = 'maior de idade'
}

else if (idade > 0 && idade < 18){
    document.getElementById('maioridade').innerHTML = 'menor de idade'
}

else{
    document.getElementById('maioridade').innerHTML = 'maluco'
}