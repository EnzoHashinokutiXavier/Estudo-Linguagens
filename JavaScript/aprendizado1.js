let primeiroNome = 'Enzo';
let segundoNome = 'Hashinokuti';
console.log(primeiroNome);  // Enzo
console.log(segundoNome);  // Hashinokuti

let presso = 30;
presso = 20;  // altera o valor da variavel
console.log(presso);  // 20

const valor = 50;  // constante, inauteravel

// comentario

let itemName = 'Pen' // string
let itemPrice = 3 // number
let itemAvailable = true // boolean
let itemColor // undefined     ou = undefined
itemName = null // esvazia a variavel

console.log(typeof itemName) // printa o tipo da variavel

let pen = {
    itemName: 'Pen',
    itemPrice: 3,
    itemAvailable: true,
    itemColor: 'Red'
}
console.log(pen)

pen.itemColor = 'Blue'
console.log(pen)

console.log(pen.itemName)


let pessoa = {  // alvo
    pessoaViva: true,
    pessoaNome: 'SeuZe',
    pessoaIdade: 40,
    pessoaRassa: 'pardo'
}

console.log(pessoa)

pessoa.pessoaViva = false  // morreu otario
console.log(pessoa)


let friends = ['Paulo', 69, 'Jao', true, 'Gustablo', 'Enzosigma', true]
console.log(friends)
console.log(friends[2])

let baitola = 'Joao'
function meCaguei(nome){
    console.log('Maeee me caguei !!!\n-Disse ', nome)
}
meCaguei(baitola)

meCaguei(friends[0])

meCaguei(pessoa.pessoaNome)


function dezporcento(valor) {
    return (valor / 10);
}
porcentagem = dezporcento(990);  // coloca o valor total nos ()
console.log(porcentagem);


function metadinha(valor){
    return (valor / 2);
}
metade = metadinha(200)
console.log(metade)


function multiplica(x1, x2){
    return (x1 * x2)
}
total = multiplica(2, 4)
console.log(total)


// console.log(++total)  valor aumenta antes de ser mostrado
// console.log(total++)  valor aumenta em um apos ser mostrado

// == valor igual
// !== valor diferente
// === tipo igual

motorista = 80  
let velocidade = motorista > 100 ? 'Acima da velocidade' : 'Dentro do limite de velocidade'
console.log(velocidade)

// and &&
// or ||
// not !

let idademinima = true
let temtitulodeeleitor = true
let podeVotar = idademinima && temtitulodeeleitor  // se os dois verdadeiros
console.log(podeVotar)

let corCliente = undefined
let corEstoque = 'azul'
let corEnviada = corCliente || corEstoque  // se nao tem cor cliente, vai cor estoque
console.log(corEnviada)

// If else
velocidade = 80
if (velocidade > 110){
    console.log("Acima da velocidade")
}
else if (velocidade >= 40 && velocidade <= 110){
    console.log("velocidade ok")
}
else
    console.log("Muito lento")


// Switch case
let local = 'BR'
function pais(aeroporto){
    switch (aeroporto) {
        case 'BR':
        console.log('Brasil')
            break
        case 'USA':
            console.log('Estados unidos')
            break
    }
}
pais(local)

// While loop
n = 5
i = 1
while(i <= 10){
    console.log(n, ' x ', i, ' = ', (n*i))
    i++
}

// For loop
n = 6
for(i = 1; i <= 10; i++){
    console.log(n, ' x ', i, ' = ', (n*i))
}

// Do While loop
i = 1
n = 9
do
{
    console.log(n, ' x ', i, ' = ', (n*i))
    i++
}while(i <= 10)


// for in loop
    const meucarro = {
    modelo: 'Fiat',
    ano: 2017,
    km: 100000
}

for(let i in meucarro)
    console.log(i, meucarro[i])


// for of loop
const amigos = ['Lauri', 'Paulo', 'Luis']

for(let i of amigos)
    console.log(i)

// biblioteca math tem varios recursos matematicos
console.log(Math.max(1, 15, 3, 20, 2))  // mostra maior numero na lista

// String, outros recursos uteis
let frase = 'Oie, sou o Enzo'
console.log(frase.startsWith('Oie')) // true
// lenght = tamanho ; includes('') = inclui; endsWith('') = termina


let nome = 'Enzo'
// aspas
console.log("Ola, " +nome+ " !\nTudo bem ?")
// crase
console.log(`Ola ${nome} !
    Tudo bem ?`)