#include <iostream>
#include <string>
using namespace std;

struct aluno{
  int matricula; // minha estrutura de dados.
  string nome;
  int nota;
   aluno *proximo;

};

int main(){

aluno *i,*a,*p,*aux; //ponteiros da estrutura aluno.
a = new aluno; //ponteiro a* que aponta para cada novo objeto criado.
i=a; //ponteiro a* que aponta para o ponteiro *i dizendo que ali é o começo da lista.
a ->matricula = 100; //ponteiro a* que aponta para o endereço de memória da matricula.
a->nome = "Matheus";//ponteiro a* que aponta para o endereço de memória da nome.
a->nota = 7;//ponteiro a* que aponta para o endereço de memória da nota.
a-> proximo = NULL;//ponteiro a* que aponta para o endereço de memória da NULL,pois ainda não existe um outro aluno.
p=a; // aqui é o ponteiro p* que p=a, salva todos os endereços do ponteiro p*.

a = new aluno; //ponteiros da estrutura aluno.
p->proximo = a;//ponteiro a* que aponta para cada novo objeto criado.
a ->matricula = 101;//ponteiro a* que aponta para o endereço de memória da matricula.
a->nome = "Eduardo";//ponteiro a* que aponta para o endereço de memória da nome.
a->nota = 10;//ponteiro a* que aponta para o endereço de memória da nota.
a-> proximo = NULL;//ponteiro a* que aponta para o endereço de memória da NULL,pois ainda não existe um outro aluno.
p=a; // aqui é o ponteiro p* que p=a, salva todos os endereços do ponteiro p*.



a = new aluno; //ponteiros da estrutura aluno.
p->proximo = a;//ponteiro a* que aponta para cada novo objeto criado.
a ->matricula = 102;//ponteiro a* que aponta para o endereço de memória da matricula.
a->nome = "Erik";//ponteiro a* que aponta para o endereço de memória da nome.
a->nota = 9;//ponteiro a* que aponta para o endereço de memória da nota.
a-> proximo = NULL;//ponteiro a* que aponta para o endereço de memória da NULL,pois ainda não existe um outro aluno.
p=a; // aqui é o ponteiro p* que p=a, salva todos os endereços do ponteiro p*.


a = new aluno; //ponteiros da estrutura aluno.
p->proximo = a;//ponteiro a* que aponta para cada novo objeto criado.
a ->matricula = 103;//ponteiro a* que aponta para o endereço de memória da matricula.
a->nome = "George";//ponteiro a* que aponta para o endereço de memória da nome.
a->nota = 8;//ponteiro a* que aponta para o endereço de memória da nota.
a-> proximo = NULL;//ponteiro a* que aponta para o endereço de memória da NULL,pois ainda não existe um outro aluno.
p=a; // aqui é o ponteiro p* que p=a, salva todos os endereços do ponteiro p*.

// aqui onde fica o laço de repetição for para printar toda lista de aluno, e como ela funciona?
//primeiramente eu criei um ponteiro *aux que começa apontando para *aux=i que é o começo da lista.
//depois eu dei uma condição de parada ao laço de repetição, que é: enquanto o ponteiro *aux!=NULL.
//diante disso, quando *aux for NULL, em outras palavras, quando não está apontando para nada, o laço para.
//então a cada volta o ponteiro *aux pula para o proximo aluno: aux=aux->proximo, até aux = NULL.
for (aluno *aux=i; aux!=NULL; aux=aux->proximo){
   cout << "Matricula: " << aux->matricula << endl;
    cout << "Nome: " << aux->nome << endl;
    cout << "Nota: " << aux->nota << endl;
    cout << "--------------------" << endl;
}
return 0;
}