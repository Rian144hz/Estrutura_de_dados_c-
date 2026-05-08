#include <iostream>
using namespace std;

int push(int *ponteiro,int indice);
int pop(int *ponteiro,int indice);
int list(int *ponteiro,int indice);

  int main(){

  int pilha[5];
  int topo = 0;
  int opcao;

  while (true){
    cout<<endl;
    cout<< "Qual sua opção?";
    cout<< "\n[1] inserir \n[2] remover \n[3] listar\n[4] sair\n";
    cout<<"Opcão: ";
    cin>>opcao;

    switch (opcao){
    case 1:
       topo = push(pilha,topo);
        break;
    case 2:
       topo = pop(pilha,topo);
        break;

        case 3:
        topo = list(pilha,topo);
        break;

        case 4:
        cout<<"Encerrando programa...";
        return 0;
    default:
        continue;
    }
    
  }

}

int push(int *ponteiro, int indice){
     if (indice >=5){
     cout<<"Pilha cheia!"<< endl;
     return indice;
     }
     int numero;
     cout<<"Digite um número: ";
     cin>>numero;

     if (numero %2==0){
        ponteiro[indice] = numero;
        indice++;
        cout<<"Número "<<numero<< " adicionado com sucesso!";
     }
     else{
     cout<<"Número IMPAR ignorado!";
     }
     return indice;
 }

 int pop(int *ponteiro, int indice){
    indice--;
    if (indice < 0 ){
        cout<<"Pilha de PARES vazia!";
        return 0;
    }
    cout<<"Número PAR removido foi: "<<ponteiro[indice];
    return indice;
    
 }

 int list(int *ponteiro,int indice){
     
     if (indice < 0){
        cout<<"Pilha de PARES vazia!";
        return 0;
     }
       cout<<"----Todos os elementos da lista-----\n";
    for (int i = 0; i < indice; i++){
        cout<<"Posicao ["<< i+1 <<"]: "<<ponteiro[i]<<endl;
    }

    return indice;
 }


