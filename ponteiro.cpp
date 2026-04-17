#include <iostream>
using namespace std;
int main(){
int numeros[] = {10,20,30,40};
int *ponteiro;
ponteiro = &numeros[0];
cout<<"O valor de var é: "<<numeros[0]<<endl;
cout<<"O endereço de var é: "<<&numeros[0]<<endl;
cout<<"O valor apontado pelo ponteiro é: "<<*ponteiro<<endl;
cout<<"O endereço apontado pelo ponteiro é: "<<ponteiro<<endl;
cout<<"O endereço do ponteiro é: "<<&ponteiro<<endl;
cout<<"================================================="<<endl;



ponteiro++;
ponteiro++;
ponteiro++;
cout<<"O novo valor de var é: "<<*ponteiro<<endl;
(*ponteiro)++;
cout<<"O novo valor de var após o encremento de 1 é: "<<*ponteiro<<endl;
cout<<"O endereço de var é: "<<&numeros[0]<<endl;
cout<<"O novo valor apontado pelo ponteiro é: "<<*ponteiro<<endl;
cout<<"O endereço apontado pelo ponteiro é: "<<ponteiro<<endl;
cout<<"O endereço do ponteiro é: "<<&ponteiro<<endl;

cout<<"O novo endereço do ponteiro encrementado é: "<<&ponteiro<<endl;

return 0;
}