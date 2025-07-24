
const colors = ['Blue', 'Yellow', 'Red', 'Green', 'Orange', 'Purple', 'Black']

const btn = document.getElementById('btn')
const color = document.querySelector('.color')

// No click
btn.addEventListener('click', function(){
    let randomColor = getRandomColor()
    document.body.style.backgroundColor = colors[randomColor]
    color.textContent = colors[randomColor]
})

// Gerar numero inteiro aleatorio 
function getRandomColor(){
    return Math.floor(Math.random() * colors.length)
}
// floor arredonda, random aleatoriza, * range do random, colors.length é o tamanho da lista de colors