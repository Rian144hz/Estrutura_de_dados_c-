#include <iostream>
using namespace std;
int main(){
int numeros[]={10,20,30,40};
int *p = numeros;
for (size_t i = 0; i < 4; i++){
    cout<<"Posição "<<i<< " tem o valor "<<*p<<endl;
    p++;
}




return 0;
}