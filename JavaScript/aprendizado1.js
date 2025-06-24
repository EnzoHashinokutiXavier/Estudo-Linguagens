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


// Array
const numeros = [4, 5, 6]
console.log(numeros)

// Adicionar final
numeros.push(7, 8, 9)

// Adicionar no começo
numeros.unshift(1, 2, 3)

// Adicionar no meio
numeros.splice(3, 0, 10, 11, 12)  // index(inicio, oq eu vou deletar (0), numeros a add

// Retirar ultimo numero
const final = numeros.pop()

// Retirar primeiro da lista
const final2 = numeros.shift()

// Retirar com splice
const final3 = numeros.splice(2, 1)  // a partir do dois, remover um item

// Encontrar posiçao de algo
console.log(numeros.indexOf(4))  // localizaçao de 4
console.log(numeros.includes(8))  // se há 8

// Encontrar algo que nao seja valor primitivo
const filmes = [
    {id: 1, nomeFilme: 'Como treinar seu dragão'},
    {id: 2, nomeFilme: 'Lilo e Stitch'},
    {id: 3, nomeFilme: 'Avatar'}
]
console.log(filmes.find(function(filmes){
    return filmes.nomeFilme == 'Avatar'
}))

// mais curto e bonito
console.log(filmes.find(filmes => filmes.nomeFilme == 'Avatar'))

// Zerar array
let numerais = [1, 2, 3, 4, 5]
numerais = []   // vazia
numerais.length = 0  // tamanho zerado
numerais.splice(0, numerais.length)  // a partir do zero, lompar tudo ate tamanho da array

// Juntar Array
let letras = ['a', 'b', 'c']
let numerais = [1, 2, 3, 4, 5]
todos = numerais.concat(letras)  // contatenar é juntar
parte = todos.slice(3, 5)  // a partir do 3, parando em 5(ate 4)

// Adicionar a uma array
let nomes = ['Enzo', 'Paulo', 'Karen', 'Laurielli']
let nomesNovo = nomes.join(', ')
console.log(nomesNovo)

// Organizar de forma alfabetica
nomes.sort()
console.log(nomes)

// Inverter ordem
nomes.reverse()
console.log(nomes)

// Verificar se todos numeros atendem uma condição
let temperaturas = [10, 34, 45, 0, -1, -10, 20]
let temperaturasPositivas = temperaturas.every(function(valor) {
    return valor >= 0
})
console.log(temperaturasPositivas)

// Retornar valores que atendem uma condiçao 
let temperaturas2 = [10, 34, 45, 0, -1, -10, 20]
let temperaturasPositivas2 = temperaturas2.filter(function(valor) {
    return valor >= 0
})
console.log(temperaturasPositivas2)
// ou
temperaturasPositivas2 = temperaturas2.filter(valor => valor >= 0)
console.log(temperaturasPositivas2)


// Function Declaration
function filme(){
    console.log('Como treinar seu dragão')
}
filme()  // Funciona ser colocar antes da function
// O java script coloca as funções para cima, para serem excutadas antes do codigo, podendo declaralas embaixo de quando chamadas

// Function Expression
const carro = function(){
    console.log('Ford')
}
carro()  // Não funciona se invertido a ordem
const caminhao = carro
caminhao()


// Acessar valor dos argumentos
function pressos(){
    let total = 0
    for(let valor of arguments)
        total += valor
    return total
}
let x = pressos(10, 20, 30)
console.log(x)   // 60


// Declarar variavel no () da função
function emprestimo(valor, aumentoPorcent = 1, meses = 5){
    return (valor + (((valor / 100) * aumentoPorcent)*meses))
}
console.log(emprestimo(100))


// Arredondamento para cima, mantendo duas casas decimais
function formatarDinheiro(valor){
    valor = Math.ceil(valor * 100)/100
    valor = valor.toFixed(2)
    return '$' + valor
}
console.log(formatarDinheiro(123.456))