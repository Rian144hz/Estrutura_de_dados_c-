#include <iostream>
#include <string>
using namespace std;

struct teste {
    int a;                //valor(carga)
    struct teste *before; //braço que segura o que vem 'ANTES'
    struct teste *prox; // braço que segura o 'ANTES' e o próximo 'FRENTE'
    
};

  //funcão de inserir sempre no inicio, passando o parânmetro ponteiro chamado de *inicio
struct teste *inserirNoInicio(struct teste *inicio){
    struct teste *novo;
    // aqui avisamos a máquina que queremos um espaço para alocar os endereços
    novo =(struct teste *) malloc(sizeof(struct teste));
    //aqui pedimos para o usuario digitar um valor.
    cout<<"Digite um valor: ";
    //aqui lemos o valor, pois o ponteiro "novo" está apontando para o endreço de memoria do valor que o usuario digitar
    cin>> novo->a;

    // como vai ser o primeiro valor, novo não tem o "braço" preso a ninguém por isso ele é NULL, não vem ninguém atras dele.
     novo->before = NULL;

     // agora o 'prox' dele vai segurar a mão do antigo primeiro com a mão da frente, pois ele agora é o primeiro.
     novo->prox = inicio;

    // aqui se a lista NÃO estiver vazia, ou seja se inicio for diferente de NULL, ou seja tem algo lá
     if (inicio !=NULL){
        inicio->before= novo; // isso significa que o antigo novo, ou incio, precisa segurar com a mão esquerda o que vem ANTES dele
     }

     return novo; // aqui ele retorna o "novo inicio" lá para main.

}
//funcão para listar a fila passando como parânmetro o ponteiro *q
void listar(struct teste *q){
     // aqui se o ponteiro *q não existir, então não tem nenhum bonequinho na fila.
      if (!q){
        cout<<"Nenhum bonequinho na fila";
        return;
      }
      //printar a fila dos bonqueinhos(ida)
      cout<<"Fila dos bonquinhos(ida)";
      while (q!=NULL){
       cout << "[" << q->a << "] <-> "; // aqui o ponteiro *p está apontando para 'a' que é o que o usuario digitou.
       q = q->prox; // isso serve para ele andar para frente pois sem isso ele não anda.
      }
}

void listarReverso(struct teste *q){
    if (!q) return; // se caso não existir lista
    struct teste *aux = q; // aqui dizemos que o ponteiro *aux agora está com endereço do ponteiro *q

    while (aux->prox != NULL) { // condição para percorrer até o final, até quando não existir mais próximo, ou seja NULL
        aux = aux->prox; // e aqui fica encarregado de fazer isso.
    }
    // ponteiro *aux é o ultimo bonequinho, pois aux = aux->prox; faz isso.
    cout<<"Fila dos bonquinhos(ida)";

    while (aux !=NULL){ // condição de parada enquanto aux NÃO for nulo.
     cout << "[" << aux->a << "] <-> "; // aqui o ponteiro *aux está apontando para 'a' que é o que o usuario digitou.
        
        aux = aux->before; // aqui o bonequinho 'aux' olha para o braço 'before'
    }                      // e se transforma no bonequinho que estava atrás de 'before', até chegar no inicio
                           // ou seja *aux = NULL
  
}
int main(){
   struct teste *p = NULL; // a fila de bonequinhos começa vazia
    int opcao;  // variavel de opção que vai ler o que o usuario escolher
       // while true, ou seja loop infinito.
      while(true) {
      //lista de opçoes
        cout << "\n1-Inserir | 2-Listar indo | 3-listar voltando: ";
        cin >> opcao; // ler a opção que o usuario digitou.
        if(opcao == 1) p = inserirNoInicio(p);  // se opçao for 1, insere o bonquinho no inicio
        else if(opcao == 2) listar(p); // se opção for 2 lista todos os bonqunhos da fila indo
         else if(opcao == 3) listarReverso(p); // se opção for 3 lista todos os bonqunhos da fila voltando
        else break; // se não for nehum dos dois fecha o programa
    }
      
}
      

