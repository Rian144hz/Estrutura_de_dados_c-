#include <iostream>

 struct no{ // estrutura ou nó/ amarração
  int valor; // valor que vamos usar
  no*proximo; // ponteiro próx do tipo no*

};
  int contarElementos(no* cabeca){ // função para contar os elementos
   int contador = 0; // variavel contador para contar a cada "volta"
   no* atual = cabeca; // variavel atual do tipo no, que agora é a cabeça

   while (atual !=NULL){ // enquanto o valor atual não for nulo,
   contador++; // conte

   atual = atual ->proximo; // isso é responsalvel por "andar" até cair no nulo.

  

  }

 return contador; // e aqui retornamos o contador

}
 int main(){
    no* n1 = new no;
    no* n2 = new no;
    no* n3 = new no; // aqui criamos todos os ponteiro do tipo no*
    no* n4 = new no;
    no* n5 = new no;

    n1 ->valor = 10;
    n2 ->valor = 20;
    n3 ->valor = 30; // aqui adicionamos os valores nesse ponteiro
    n4 ->valor = 40;
    n5 ->valor = 50;

    n1 ->proximo = n2; // aqui n1 aponta para n2
    n2 ->proximo = n3; // n2 aponta para n3
    n3 ->proximo = n4; // n3 aponta para n4
    n4 ->proximo = n5; // n4 aponta para n5
    n5 ->proximo = NULL; // n5 aponta para null, ou seja nada

    no* cabeca = n1; // aqui falamos que o começo a "cabeça"

    int total = contarElementos(cabeca); // aqui chamamos a funcão passando a variavel cabeça, que é o n1;
    std::cout << "A lista tem " << total << " elementos."; // aqui printamos
}