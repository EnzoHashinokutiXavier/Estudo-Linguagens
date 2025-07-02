
function update(){
    let altura = Number(document.getElementById('altura').value)
    let peso = Number(document.getElementById('peso').value)

    
    let IMC = (peso/(altura*altura))

    document.getElementById('pesoMarcado').innerHTML = peso
    document.getElementById('imc').innerHTML = IMC.toFixed(2)

    if(IMC <= 18.5){
        document.getElementById('resposta').innerHTML = 'Abaixo do peso !'
    }
    else if(IMC <= 24.9){
        document.getElementById('resposta').innerHTML = 'No peso normal !'
    }
    else if(IMC <= 29.9){
        document.getElementById('resposta').innerHTML = 'Acima do peso !'
    }
    else if(IMC <= 39.9){
        document.getElementById('resposta').innerHTML = 'Em obesidade grau I !'
    }
    else{
        document.getElementById('resposta').innerHTML = 'Em obesidade grau II !'
    }

}