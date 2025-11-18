#include <iostream>
#include <stdio.h>

using namespace std;

// Define a estrutura das informações dos produtos
struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
};

// Declara funções
void cadastrarProduto (Produto produtos[], int &qtd);
void listarProdutos (Produto produtos[], int qtd);
void buscarProduto (Produto produtos[], int qtd, int codigo);
void excluirProduto (Produto produtos[], int &qtd, int codigo);
void salvarEmArquivo (Produto produtos[], int qtd);


// Crie um programa que gerencie o cadastro de até 100 produtos de uma loja.
int main()
{
    // Os dados devem ser armazenados em um vetor de struct.
    Produto lista[100];
    int quantia = 0, codigo, escolha;

    // Painel principal / inicial
    while (true)
    {
        cout<<"\n---------------------------------------------\n"<<
            "Selecione uma opcao :\n"<<
            "[1] Cadastrar Produto\n"<<
            "[2] Listar Produtos\n" <<
            "[3] Buscar Produtos\n" <<
            "[4] Excluir Produtos\n" <<
            "[5] Salvar Em Arquivo\n"<<
            "[6] Sair\n";
        cin>>escolha;

        // Chama função escolhida
        switch(escolha)
        {
            case 1 : 
                cadastrarProduto(lista, quantia);
                cout<<"\nProduto cadastrado";
                break;
            case 2 : 
                listarProdutos(lista, quantia);
                break;
            case 3 : 
                cout<<"Informe o codigo : ";
                cin>>codigo;
                buscarProduto(lista, quantia, codigo);
                break;
            case 4 : 
                cout<<"Informe o codigo : ";
                cin>>codigo;
                excluirProduto(lista, quantia, codigo);
                break;
            case 5 :
                salvarEmArquivo(lista, quantia);
                break;
            case 6 :
                cout<<"Tchau !";
                return 0;
            default :
                cout<<"Numero Invalido !";
        }
    }
}

// Cadastra um novo produto (passagem por referência).
void cadastrarProduto (Produto produtos[], int &qtd)
{
    // Verifica se há espaço para novo cadastro
    if (qtd == 100)
    {
        cout<<"Limite de produtos atingido !";
        return;
    }

    // Requisita e armazena informações do produto
    cout<<"Informe o codigo :";
    cin>>produtos[qtd].codigo;
    cout<<"Informe o nome :";
    cin.ignore();
    cin.getline(produtos[qtd].nome, 50);
    cout<<"Informe o preco :";
    cin>>produtos[qtd].preco;
    cout<<"Informe a quantidade :";
    cin>>produtos[qtd].quantidade;
    // Aumenta registro de quantia de produtos
    qtd++;
}

// Exibe todos os produtos cadastrados (passagem por valor).
void listarProdutos (Produto produtos[], int qtd)
{
    // Verifica se há produtos cadastrados
    if (qtd == 0)
    {
        cout<<"Nenhum produto cadastrado !";
        return;
    }

    // Exibe todos produtos cadastrados
    for (int i = 0; i < qtd; i++)
    {
        cout<<"\n---------------------------------------------"
            <<"\nCodigo :"<<produtos[i].codigo
            <<"\nNome : "<<produtos[i].nome
            <<"\nPreco : "<<produtos[i].preco 
            <<"\nQuantidade : "<<produtos[i].quantidade;
    }
}

// Procura um produto pelo código e exibe seus dados.
void buscarProduto (Produto produtos[], int qtd, int codigo)
{
    bool condicao = false;
    // Verifica se há produtos cadastrados
    if (qtd == 0)
    {
        cout<<"Nenhum produto cadastrado !";
        return;
    }

    for (int i = 0; i < qtd; i++)
    {
        // Se produto encontrado, informações são exibidas
        if (produtos[i].codigo == codigo)
        {
            cout<<"\n---------------------------------------------"
                <<"\nNome : "<<produtos[i].nome
                <<"\nPreco : "<<produtos[i].preco 
                <<"\nQuantidade : "<<produtos[i].quantidade;
            condicao = true;
        }
    }

    // Informa usuário se produto nao encontrado
    if (condicao == false)
    {
        cout<<"\nProduto nao encontrado";
    }
}

// Exclui um produto procurado pelo código e exibe seus dados.
void excluirProduto (Produto produtos[], int &qtd, int codigo)
{
    int condicao = 0;

    // Verifica se há produtos cadastrados
    if (qtd == 0)
    {
        cout<<"Nenhum produto cadastrado !";
        return;
    }

    // Procura por produtos com código informado
    for (int i = 0; i < qtd; i++)
    {
        // Se produto encontrado, informações são exibidas
        if (produtos[i].codigo == codigo)
        {
            cout<<"\nNome : "<<produtos[i].nome
                <<"\nPreco : "<<produtos[i].preco 
                <<"\nQuantidade : "<<produtos[i].quantidade;
            // Contador de excluidos aumenta (mecanismo para caso haja mais de um produto com mesmo codigo)
            condicao++;
        }
        else
        {
            // Move cada produto uma casa anterior para cada produto deletado
            if (condicao > 0)
            {
                produtos[i - condicao] = produtos[i];
            }
        }
    }
    // Quantidade de produtos atualizada com base na quantia de excluidos
    qtd = qtd - condicao;

    if(condicao == 0)
    {
        cout<<"\nProduto nao encontrado";
    }
    else
    {
        cout<<"\nProduto deletado";
    }
}

// Grava os produtos em um arquivo texto (produtos.txt).
void salvarEmArquivo (Produto produtos[], int qtd)
{
    // Abre arquivo "produtos.txt" em formato de escrita
    FILE *p = fopen("produtos.txt", "w");
    // Verifica se arquivo foi aberto corretamente
    if (p == NULL)
    {
        cout<<"Falha ao abrir arquivo produtos.txt. Produtos nao gravados.";
        return;
    }

    // Escreve no arquivo as informações de cada produto
    for (int i = 0; i < qtd; i++)
    {
        // codigo, nome, preço, quantidade
        fprintf(
            p, 
            "%d;%s;%.2f;%d\n", 
            produtos[i].codigo,
            produtos[i].nome,
            produtos[i].preco,
            produtos[i].quantidade
        );
    }

    cout<<"Produtos salvos em produtos.txt";
    fclose(p);
}