#include <iostream>
using namespace std;


struct No {
   string nomes;
   struct No *prox;
};

struct No *inicio = nullptr;
void listar(){
if (inicio == nullptr){
    cout<<"Lista vazia chef";
    return;
}

No *atual = inicio;
while (atual !=nullptr){
  cout<<atual->nomes;
  if (atual->prox != nullptr) cout << " -> ";
        atual = atual->prox;
    }
}

void inserir(string nome){
  No *novo = new No();

  cout<<"Digite algum nome: ";
  cin>>(novo->nomes = nome);

  cout<<"Nome["<<nome<<"] adicionado com sucesso!";

  return;

}

int main(){
 int opc;

    while (true) {
        cout << "\n[1] Inserir\n[2] listar\n[3] sair \nopcao: ";
        cin >> opc;

        switch (opc) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                return 0;
            default:
                cout << "Opcao invalida!" << endl;
        }
    }
}


