#include <iostream>
using namespace std;

struct No {
    int a; // valor que vamos usar
    No *prox; // ponteiro prox
};

No *inicio = nullptr; // ponteiro inicio, está null pois nao tem nada na lista

void inserir(int valor) { // função inserir
    No *novo = new No(); // abrindo um "caixinha" na memoria do meu ubuntu
    novo->a = valor; // dizendo que a variavel valor é o mesmo que fazer novo->a = valor
    novo->prox = nullptr; //proximo do novo sempre é null, pois n foi adionado ainda.

    
    if (inicio == nullptr || valor < inicio->a) { // se inicio for nulo, ou valor que for inserido for menor que o inicio
        novo->prox = inicio; // se caso a codição seja verdadeira, agora o antigo inicio é o segundo
        inicio = novo; // e o inicio agora é o novo
        return;//retorna para main
    }

    
    No *atual = inicio; // aqui diz que ponteiro atual é o inicio
    while (atual->prox != nullptr && atual->prox->a < valor) { // Enquanto não chegar no fim E o valor atual for menor que o novo valor
        atual = atual->prox; // salv o proximo como atual
    }

    novo->prox = atual->prox; // o ataual aponta para o proximo
    atual->prox = novo; // e proximo agora é o novo
}

void remover(int valor) {
    if (inicio == nullptr) {
        cout << "Lista vazia!" << endl;
        return;
    }

   
    if (inicio->a == valor) {
        No *temp = inicio;
        inicio = inicio->prox;
        delete temp;
        cout << "Valor " << valor << " removido." << endl;
        return;
    }

    // Procura o nó na lista
    No *atual = inicio;
    while (atual->prox != nullptr && atual->prox->a != valor) {
        atual = atual->prox;
    }

    if (atual->prox == nullptr) {
        cout << "Valor nao encontrado!" << endl;
        return;
    }

    No *temp = atual->prox;
    atual->prox = temp->prox;
    delete temp;
    cout << "Valor " << valor << " removido." << endl;
}

void listar() {
    if (inicio == nullptr) {
        cout << "Lista vazia!" << endl;
        return;
    }

    No *atual = inicio;
    cout << "Lista: ";
    while (atual != nullptr) {
        cout << atual->a;
        if (atual->prox != nullptr) cout << " -> ";
        atual = atual->prox;
    }
    cout << endl;
}

int main() {
    int opc, valor;

    while (true) {
        cout << "\n[1] Inserir\n[2] Remover\n[3] Listar\n[4] Sair\nopcao: ";
        cin >> opc;

        switch (opc) {
            case 1:
                cout << "Valor: ";
                cin >> valor;
                inserir(valor);
                break;
            case 2:
                cout << "Valor: ";
                cin >> valor;
                remover(valor);
                break;
            case 3:
                listar();
                break;
            case 4:
                return 0;
            default:
                cout << "Opcao invalida!" << endl;
        }
    }
}