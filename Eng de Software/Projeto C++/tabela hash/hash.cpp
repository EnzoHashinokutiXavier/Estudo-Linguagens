#include <iostream>
#include <cstdlib>
using namespace std;

#define TAM 10

typedef enum {
    VAZIO,
    OCUPADO,
    APAGADO
} Estado;

struct Node {
    int val;
    struct Node* next;
};

struct HashTable {
    struct Node* encadeado[TAM];
    struct {
        int val;
        Estado est;
    } linear[TAM];
};

void inicializar(struct HashTable* h) {
    for(int i = 0; i < TAM; i++) {
        h->encadeado[i] = NULL;
        h->linear[i].est = VAZIO;
    }
}

int hash_func(int x) {
    return x % TAM;
}

// Inserção com encadeamento
int inserir_encadeado(struct HashTable* h, int valor) {
    int col = 0;
    int pos = hash_func(valor);

    struct Node* p = h->encadeado[pos];
    while(p != NULL) {
        col++;
        p = p->next;
    }

    struct Node* novo = (struct Node*) malloc(sizeof(struct Node));
    novo->val = valor;
    novo->next = h->encadeado[pos];
    h->encadeado[pos] = novo;

    return col;
}

// Inserção linear
int inserir_linear(struct HashTable* h, int valor) {
    int col = 0;
    int pos = hash_func(valor);

    while(h->linear[pos].est == OCUPADO) {
        pos = (pos + 1) % TAM;
        col++;
    }

    h->linear[pos].val = valor;
    h->linear[pos].est = OCUPADO;

    return col;
}

// Busca encadeamento
int buscar_encadeado(struct HashTable* h, int valor) {
    int cmp = 0;
    int pos = hash_func(valor);

    struct Node* p = h->encadeado[pos];
    while(p != NULL) {
        cmp++;
        if(p->val == valor) {
            cout << "Encontrado!\n";
            return cmp;
        }
        p = p->next;
    }

    cout << "Nao encontrado (Encadeamento)\n";
    return cmp;
}

// Busca linear
int buscar_linear(struct HashTable* h, int valor) {
    int cmp = 0;
    int pos = hash_func(valor);

    while(h->linear[pos].est != VAZIO) {
        cmp++;
        if(h->linear[pos].val == valor && h->linear[pos].est == OCUPADO) {
            cout << "Encontrado!\n";
            return cmp;
        }
        pos = (pos + 1) % TAM;
    }

    cout << "Nao encontrado (Linear)\n";
    return cmp;
}

// Remocao encadeamento
void remover_encadeado(struct HashTable* h, int valor) {
    int pos = hash_func(valor);
    struct Node* p = h->encadeado[pos];
    struct Node* ant = NULL;

    while(p != NULL) {
        if(p->val == valor) {
            if(ant == NULL) {
                h->encadeado[pos] = p->next;
            } else {
                ant->next = p->next;
            }
            free(p);
            cout << "Removido (Encadeamento)\n";
            return;
        }
        ant = p;
        p = p->next;
    }

    cout << "Nao encontrado para remover (Encadeamento)\n";
}

// Remocao linear
void remover_linear(struct HashTable* h, int valor) {
    int pos = hash_func(valor);

    while(h->linear[pos].est != VAZIO) {
        if(h->linear[pos].val == valor && h->linear[pos].est == OCUPADO) {
            h->linear[pos].est = APAGADO;
            cout << "Removido (Linear)\n";
            return;
        }
        pos = (pos + 1) % TAM;
    }

    cout << "Nao encontrado para remover (Linear)\n";
}

// Exibir encadeamento
void exibir_encadeado(struct HashTable* h) {
    cout << "\n=== ENCADEAMENTO ===\n";
    for(int i = 0; i < TAM; i++) {
        cout << "[" << i << "]: ";
        struct Node* p = h->encadeado[i];
        while(p != NULL) {
            cout << p->val << " -> ";
            p = p->next;
        }
        cout << "NULL\n";
    }
}

// Exibir linear
void exibir_linear(struct HashTable* h) {
    cout << "\n=== SONDAGEM LINEAR ===\n";
    for(int i = 0; i < TAM; i++) {
        cout << "[" << i << "]: ";
        if(h->linear[i].est == OCUPADO) {
            cout << h->linear[i].val;
        } else if(h->linear[i].est == APAGADO) {
            cout << "[DEL]";
        } else {
            cout << "[ ]";
        }
        cout << "\n";
    }
}

void liberar(struct HashTable* h) {
    for(int i = 0; i < TAM; i++) {
        struct Node* p = h->encadeado[i];
        while(p != NULL) {
            struct Node* temp = p;
            p = p->next;
            free(temp);
        }
    }
}

int main() {
    struct HashTable tabela;
    inicializar(&tabela);

    int op, valor;

    while(1) {
        cout << "\n1 - Inserir\n2 - Buscar\n3 - Remover\n4 - Ver tabelas\n5 - Sair\nOpcao: ";
        cin >> op;

        if(op == 1) {
            cout << "Valor: ";
            cin >> valor;
            int c1 = inserir_encadeado(&tabela, valor);
            int c2 = inserir_linear(&tabela, valor);
            cout << "Colisoes encadeado: " << c1 << "\n";
            cout << "Colisoes linear: " << c2 << "\n";
        }
        else if(op == 2) {
            cout << "Valor: ";
            cin >> valor;
            cout << "Comparacoes encadeado: " << buscar_encadeado(&tabela, valor) << "\n";
            cout << "Comparacoes linear: " << buscar_linear(&tabela, valor) << "\n";
        }
        else if(op == 3) {
            cout << "Valor: ";
            cin >> valor;
            remover_encadeado(&tabela, valor);
            remover_linear(&tabela, valor);
        }
        else if(op == 4) {
            int escolha;
            cout << "1 - Encadeamento\n2 - Linear\nOpcao: ";
            cin >> escolha;
            if(escolha == 1) {
                exibir_encadeado(&tabela);
            } else if(escolha == 2) {
                exibir_linear(&tabela);
            }
        }
        else if(op == 5) {
            break;
        }
        else {
            cout << "Opcao invalida!\n";
        }
    }

    liberar(&tabela);
    return 0;
}
