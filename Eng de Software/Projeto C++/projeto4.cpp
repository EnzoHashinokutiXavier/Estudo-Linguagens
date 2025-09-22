#include<iostream>
#include<cstdio>
using namespace std;

struct livro{
    int codCatalogo;
    char doacao[2];
    char nomeObra[50];
    char nomeAutor[50];
    char editora[50];
};

int main(){
    livro exatas[5];
    livro humanas[5];
    livro biologicas[5];
    livro x;
    int e = 0, h = 0, b = 0, i, area, codigo;

    cout << "\n[1] Ciencias Exatas\n[2] Ciencias Humanas\n[3] Ciencias Biologicas\n";

    for(i = 0; i < 5; i++){
        cout << "Informe a area :";
        cin >> area;
        cout << "Informe o Codigo de Catalogo :";
        cin >> x.codCatalogo;
        cout << "E uma doacao ? [s/n] :";
        cin >> x.doacao;
        cin.ignore(); // Limpa o buffer antes de ler strings com espaços
        cout << "Nome da obra :";
        cin.getline(x.nomeObra, 50);
        cout << "Nome do autor :";
        cin.getline(x.nomeAutor, 50);
        cout << "Editora :";
        cin.getline(x.editora, 50);

        switch (area){
            case 1:
                exatas[e++] = x;
                break;
            case 2:
                humanas[h++] = x;
                break;
            case 3:
                biologicas[b++] = x;
                break;
            default:
                cout << "Area invalida";
                return 1;
        }
    }

    while (true){
        cout << "Informe o código do livro desejado (digite 1 para sair) :";
        cin >> codigo;
        if(codigo == 1){
            break;
        }
        cout << "Informe a area do livro :";
        cin >> area;

        bool encontrado = false;
        if (area == 1){
            for (i = 0; i < e; i++){
                if (exatas[i].codCatalogo == codigo){
                    cout << "É doacao ? : "<< exatas[i].doacao << endl;
                    cout << "Nome da obra : "<< exatas[i].nomeObra << endl;
                    cout << "Nome do autor : "<< exatas[i].nomeAutor << endl;
                    cout << "Editora : "<< exatas[i].editora << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) cout<<"Livro nao encontrado\n";
        }else if (area == 2){
            for (i = 0; i < h; i++){
                if (humanas[i].codCatalogo == codigo){
                    cout << "É doacao ? : "<< humanas[i].doacao << endl;
                    cout << "Nome da obra : "<< humanas[i].nomeObra << endl;
                    cout << "Nome do autor : "<< humanas[i].nomeAutor << endl;
                    cout << "Editora : "<< humanas[i].editora << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) cout<<"Livro nao encontrado\n";
        }else if (area == 3){
            for (i = 0; i < b; i++){
                if (biologicas[i].codCatalogo == codigo){
                    cout << "É doacao ? : "<< biologicas[i].doacao << endl;
                    cout << "Nome da obra : "<< biologicas[i].nomeObra << endl;
                    cout << "Nome do autor : "<< biologicas[i].nomeAutor << endl;
                    cout << "Editora : "<< biologicas[i].editora << endl;
                    encontrado = true;
                    break;
                }
            }
            if (!encontrado) cout<<"Livro nao encontrado\n";
        }else{
            cout << "area invalida\n";
        }
    }
}