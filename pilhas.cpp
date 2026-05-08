#include <iostream>
using namespace std;

int main(){
    int tam, topo = 0, opc, numero; // variaveis que vou usar

    cout << "Tamanho: "; // aqui eu peço o tamanho do alocamento
    cin >> tam; // aqui eu leio o tamanho

    int *p = new int[tam]; // aqui eu crio um caixa na memoria do meu sistema, com o tamnho que passar lá encima.
    //aqui eu faço um loop que funciona basicamente para ler a opcao que o usuario digitar e enquanto não a opção for diferente de 3
    while (cout << "\n[1] adicionar\n[2] remover\n[3] sair\nopcao: " && cin >> opc && opc != 3){
    // aqui caso a opção for 1
        if (opc == 1){
        // aqui nessa condição ele vê se tem espaço se caso topo for menor que tamanho
            if (topo < tam){
            // aqui eu peço um número par ao usuário
                cout << "Digite um par: ";
                cin >> numero;// leio esse número
                if (numero % 2 == 0){ // vejo se ele é divisivel por 2
                    p[topo++] = numero; // aqui eu adiciono ele na pilha e ja incremento a outra posição
                    cout << "Adicionado com sucesso!"; // printo que foi adiconado com sucesso
                }
                else{
                    cout << "Impar nao chef"; // caso o número for impar, ele avisa que impar não
                }
            }
            else{
                cout << "Pilha cheia chef!"; // caso a pilha esteja cheia
            }
        }
        //caso a opção seja 2
        else if (opc == 2){
            if (topo > 0){ // ele verifica se a pilha não está vazia
                
                int removido = p[--topo]; // aqui eu removo, passando o topo da lista ou seja, sempre é o topo que sai
                cout << "O numero [" << removido << "] caiu fora!"; // aqui eu printo qual cai fora
            }
            else{
                cout << "Pilha vazia chef!"; // caso a pilha esteja vazia
            }
        }
        else{
            cout << "Essa opcao nao existe chef KKKKKKK"; // caso a opção nao exista, ou seja,difrente de 3
        }
    }

    delete[] p; // limpo a memoria do sistema
    return 0; // return padrao do c++
}