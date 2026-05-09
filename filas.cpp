#include <iostream>
using namespace std;

int qstore(int *q, int t);
int qretrieve(int *q, int t);
void ajustaFila(int *q, int t);

int main(){
    int fila[3];
    int cauda = 0;
    int opc;
    int numero;

    while (true){
        cout << endl;
        cout << "\n[1] adicionar\n[2] remover\n[3] sair\nopcao: ";
        cin >> opc;

        switch (opc){
        case 1:
        cauda = qstore(fila,cauda);
            break;
            case 2:
            cauda = qretrieve(fila,cauda);
            break;
            case 3:
            cout<<"Encerrando programa......";
            return 0;
        default:
            break;
        }
    }
}

int qstore(int *q, int t){

    if (t > 3){
        cout << "Fila cheia!";
        return t;
    }
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    q[t++] = numero;

    return t;
}

int qretrieve(int *q, int t){
     t--;
    if (t < 0){
        cout << "Fila vazia chef";
        return 0;
    }
    cout << "Item removido foi[" << q[0] << "]";
    ajustaFila(q, t);

    return t;
}

void ajustaFila(int *q, int t){
    for (int i = 0; i < t; i++){
        q[i] = q[i + 1];
    }
}