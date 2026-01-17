
const btn = document.getElementById('btn')
const color = document.querySelector('.color')
let modo = 'claro'

color.textContent = modo
document.querySelector('h1').style.color = 'black'

// No click
btn.addEventListener('click', function(){
    if(modo == 'claro'){
        modo = 'escuro'
        document.body.style.backgroundColor = 'Black'
        document.querySelector('h1').style.color = 'white'
        color.textContent = modo
    }
    else{
        modo = 'claro'
        document.body.style.backgroundColor = 'White'
        document.querySelector('h1').style.color = 'black'
        color.textContent = modo
    }
})

