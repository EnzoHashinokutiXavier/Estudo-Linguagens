
const btn = document.getElementById('btn')
const color = document.querySelector('.color')
let modo = 'claro'
// No click
btn.addEventListener('click', function(){
    if(modo == 'claro'){
        modo = 'escuro'
        document.body.style.backgroundColor = 'Black'
        color.textContent = modo
    }
    else{
        modo = 'claro'
        document.body.style.backgroundColor = 'White'
        color.textContent = modo
    }
})

