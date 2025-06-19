
entrada = String(prompt('Perfil de usuário : '))
senha = Number(prompt('Palavra chave : '))

document.getElementById('usuario').innerHTML = entrada
document.getElementById('senha').innerHTML = senha


function criarPerfil(login, password, nome, idade){
    perfil = {
        nomeUsuario: nome,
        idadeUsuario: idade,
        loginUsuario: login,
        senhaUsuario: password
    }
    return perfil
}

let enzo = criarPerfil('Enzo', 150307, 'Enzo Hashinokuti Xavier', 18)
let paulo = criarPerfil('Carniel22', 220705, 'Paulo Carniel', 19)

const usuarios = [enzo, paulo]
let pessoa

function verificarDados(){
    for(let usuario of usuarios){
        if (entrada == usuario.loginUsuario){
            if (senha == usuario.senhaUsuario){
                pessoa = usuario.nomeUsuario
                return 0
            }
        }
    }
    return 1
}    

tentativa = verificarDados()

if (tentativa == 0){
    document.getElementById('permisao').innerHTML = 'Acesso autorizado, olá ' + pessoa + ' !'
}
else{
    document.getElementById('permisao').innerHTML = 'Acesso negado, tente novamente !'
}