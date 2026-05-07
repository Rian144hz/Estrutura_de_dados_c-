#include <iostream>
using namespace std;
#include <cstdlib>
 // minha estrututura de dados.
 struct teste{
    int a; // valor que vamos guardar
    struct teste *prox; // ponteiro *prox usadado para apontar para o começo meio e fim da lista.
 };
 
//avisando o c++ que essas serão as funçoes usadas.
 struct teste * inserir(struct teste *q);
 struct teste * remover(struct teste *q);
 void listar(struct teste *q);
 // programa principal
 int main(){
 // 'p' é o nosso ponteiro de INÍCIO.
 struct teste *p =NULL; // ponteiro *p apontando para NULL, ou seja ainda não existe nada na lista.
 int opcao; // variavél opcao, para ser usada como input para o switch
 // while(true) ou seja loop infinito
 while (true){
 // menu de opçoes
    cout<<"\nMenu de opções:"<<endl;
    cout<<"(1) Inserir"<<endl;
    cout<<"(2) Remover"<<endl;
    cout<<"(3) listar"<<endl;
    cout<<"(4) Sair"<<endl;
    cout<<"Escolha: ";
    cin>>opcao;

    switch (opcao){
   case 1: //caso o usuario digite 1, a funcão (inserir) insere um elemento na lista, isso acontece por causa do ponteiro *p que aponta para o endereço do elemento.
      p = inserir(p);
        break;
    case 2: //caso o usuario digite 1, a funcão (remover) remove um elemento na lista, isso acontece por causa do ponteiro *p que aponta para o endereço do elemento.
        p = remover(p);
        break;
    case 3: //caso o usuario digite 1, a funcão (listar) lista os elementos da lista, isso acontece por causa do ponteiro *p que aponta para o endereço dos elementos.
        listar(p);
        break;
    case 4: // caso digite 4, a aplicação fecha.
       return 0; // bem aqui.
    default:
        continue;
    }

    }
 }
 //função inserir
 struct teste * inserir(struct teste *q){
 struct teste *t, *aux,*anterior; //ponteiros da strutura 'teste'.
      // aqui alocamos a memoria no novo nó, ou seja ponteiro *t.
      t = (struct teste *) malloc(sizeof(struct teste));

       // aqui caso o malloc não exista, ou seja (!t) é por causa de memoria RAM insuficiente.
       if (!t){
        cout<<"Você não tem espaço animal!";
        return q;

       }
       // aqui onde ele pede para o usuario digitar um valor
       cout<<"Digite o valor para inserir ordenadamente: ";
       // nesse 'cin>>' o ponteiro *t está apontando para a, ou seja t->a ele ta dizendo que aquele endereço é o de a, ou seja o que o usuario digitou.
       cin>>(t->a);
       // aqui o t->prox = NULL, ou seja t está apontando para o próximo, que é nulo, pois ainda não existe.
       t->prox = NULL;

       //caso a lista seja vazia, OU o valor é MENOR do que o primeiro elemento da lista
       if (!q || t->a < q->a){
       cout<<"Primeiro elemento inserido(ordenado)!";
       t->prox = q; // aqui o novo elemento aponta para o antigo primeiro, ou seja, o que era o primeiro agora é o segundo.
       return t;// aqui t fica como primeiro da lista.
       }else{
       // caso for inserido no meio ou no fim.
      aux = q; // ponteiro *aux vai sair varrendo até encontrar o menor elemento da lista.
      anterior = q;  // 'anterior' vai ficar um passo atrás do q.
       

      // Enquanto não chegar no fim E o valor atual for menor que o novo valor
    while (aux != NULL && aux->a < t->a) {
        anterior = aux; // Salva o atual como anterior
        aux = aux->prox; // Pula para o próximo até cair no NULL.
    }

    /* O PULO DO GATO DA INSERÇÃO:
       O ponteiro 'anterior' agora aponta para o novo ponteiro 't'.
       O novo ponteiro 't' aponta para o 'aux' (que é o maior que ele). */
    anterior->prox = t;
    t->prox = aux; 

    cout << "Inserido na posicao correta!" << endl;
    return q; // O início 'q' continua o mesmo
       }
 }

      //função de listar os elementos da lista
       void listar(struct teste *q) {
       // aqui verifica se a lista está vazia, ou seja, (!q) NÃO existe nehum elemento
        if (!q) {
        cout << "A lista esta vazia!" << endl;
        return;
    }

       cout << "Elementos da lista:" << endl;
    
    do {
    //Aqui dentro, eu chamo esse cara de q, então estou acessando q->a".
        cout << " -> " << q->a << endl;

        // e aqui ele fica apontando para o próximo até não existir mais próximo ou seja, NULL.
        q = q->prox;
        //aqui é a condição de parada, enquanto q!=NULL ele vai ficar listando os elementos
    } while (q != NULL);
}
// funcão de remover elementos
struct teste * remover(struct teste *q) {
// aqui verifica se a lista está vazia, ou seja, (!q) NÃO existe nehum elemento
    if (!q) {
        cout << "Nada para remover!" << endl;
        return q;
    }

    int valor; //variavel 'valor' criada  para pegar o valor que o usuario deseja remover
    cout<<"Qual valor deseja remover? ";
    cin>>valor; // pega o valor que o usuario quer remover
    struct teste *t, *aux; // qui fica os ponteiros que vão ser usados nessa função


   //caso o valor esteja no PRIMEIRO nó ou seja no ponteiro *q
    if ((q->a)==valor){
       aux = q->prox; // aqui guardamos o próximo elemento para o ponteiro *aux
       free(q); // aqui deletamos o primeiro elemento da memoria
       cout << "Removido do inicio!" << endl;
       return aux; // aqui retornamos o ponteiro *aux, ou seja ele é o PRIMEIRO agora.
    }
    //caso ele esteja no meio ou no fim.
    // o ponteiro *t será oq estamos testando, o ponteiro *aux será o anterior
    t = q->prox;  // aqui ele começa pelo segundo, ou seja (meio)
    aux = q; // aqui ele começa pelo inicio, como retornamos la encima.
    

    //aqui é enquanto t != NULL, ou seja, enquanto ele NÃO apontar para nada.
    while (t != NULL) {
    // Se encontramos o valor no ponteiro '*t'
        if ((t->a) == valor) {
        /*PULO DO GATO
        t->prox é ponteiro que aponta para o endereço que vem DEPOIS do alvo, ou seja o que queremos remover.
        aux->prox é o ponteiro do anterior, ou seja, do INICIO.
        */
        // aqui fazemos o ponteiro ANTEIRO o aux->prox, pular o 't' que vai ser removido, e segurar no proximo direto, que pode ser NULL.
            aux->prox = t->prox;

            free(t); //Agora que 't' está solto, podemos apagar da memória
            cout << "Valor removido com sucesso!" << endl;
            return q; //aqui retorna o inicio da lista
        }

      /* aqui se não encontrou ainda, os dois dão um passo à frente:
           O 'aux' vira o 't' atual, e o 't' vira o próximo que pode ser NULL */
        aux = t; 
        t = t->prox;
    }
        cout << "Valor nao encontrado na lista!" << endl;
        return q;
    }

       
 
 
 
     
       
 
 
 