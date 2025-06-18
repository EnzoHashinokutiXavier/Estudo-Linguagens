let livro = {
    titulo : "Gato de botas",
    autor : "Paulo",
    paginas : 123,
    capitulos : {
        cap1 : "Inicio",
        cap2 : "Outro capitulo"
    },
    escreva : function (){
        for(let i in livro){
            console.log(i, " : ", livro[i])
        }
    }
}

livro.escreva()