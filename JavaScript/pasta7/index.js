
function update(){
    let altura = Number(document.getElementById('altura').value)
    let peso = Number(document.getElementById('peso').value)

    
    let IMC = (peso/(altura*altura))

    document.getElementById('pesoMarcado').innerHTML = peso
    document.getElementById('imc').innerHTML = IMC.toFixed(2)

}