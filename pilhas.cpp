#include <iostream>
using namespace std;

int main(){
    int tam, topo = 0, opc, numero;

    cout << "Tamanho: ";
    cin >> tam;

    int *p = new int[tam];

    while (cout << "\n[1] adicionar\n[2] remover\n[3] sair\nopcao: " && cin >> opc && opc != 3){
        if (opc == 1){
            if (topo < tam){
                cout << "Digite um par: ";
                cin >> numero;
                if (numero % 2 == 0){
                    p[topo++] = numero;
                    cout << "Adicionado com sucesso!";
                }
                else{
                    cout << "Impar nao chef";
                }
            }
            else{
                cout << "Pilha cheia chef!";
            }
        }
        else if (opc == 2){
            if (topo > 0){
                
                int removido = p[--topo];
                cout << "O numero [" << removido << "] caiu fora!";
            }
            else{
                cout << "Pilha vazia chef!";
            }
        }
        else{
            cout << "Essa opcao nao existe chef KKKKKKK";
        }
    }

    delete[] p;
    return 0;
}