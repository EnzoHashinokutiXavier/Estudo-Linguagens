let valor = Number(prompt('Resposta : ')) // valor recebido como numero

if(valor == 2345678){
    document.getElementById('resultado').innerHTML = 'Acertou'
}

else{
    document.getElementById('resultado').innerHTML = 'Errou'
}