# Docker

sites.google.com/unigran.br/cursos/docker/modulo-2

### Gerenciamento de containers
docker run (imagem) - Criar e iniciar
docker ps -a        - Listar containers
docker start (id)   - Iniciar
socker stop (id)    - Parar
docker rm (id)      - Remover

### Gerenciamento de imagens
docker images           - listar imagens
docker build -t (tag) . - Construir
docker pull (imagem)    - Baixar
docker rmi (id)         - Remover
docker push (imagem)    - Enviar


# limpar containers
docker container prune
y
docker ps
docker ps -a

### Principais instruções
FROM -> imagem base
WORKDIR -> define o diretorio de trabalho
COPY -> copia arquivos do host
RUN -> executa comandos durante o build
CMD / ENTRYPOINT -> comando principal do container
EXPOSE -> documenta as portas utilizadas

### baixar imagem ubuntu e rodar
docker run -it ubuntu:22.04

-it executa em modo interatico
ubuntu:22.04    imagem base oficial do ubuntu


ver pastas 
ls


PS C:\programas\Docker\pasta01> docker build -t app .
PS C:\programas\Docker\pasta01> docker run --name enzo -p 8080:8080 app
Hello, world