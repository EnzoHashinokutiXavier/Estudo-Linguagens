let valor = Number(prompt('Digite o valor do produto : ')) // valor recebido como numero

if(valor >= 20){
    document.getElementById('resultado').innerHTML = 'Aprovado'
}

else{
    document.getElementById('resultado').innerHTML = 'Negado'
}