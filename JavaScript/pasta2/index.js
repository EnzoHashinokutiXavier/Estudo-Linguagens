
let palavra = String(prompt('Digite seu nome :'))

if (palavra == 'Enzo' || palavra == 'enzo'){
    document.getElementById('nome').innerHTML = 'eu mesmo'
}

else{
    document.getElementById('nome').innerHTML = palavra
}