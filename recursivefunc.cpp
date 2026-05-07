#include <iostream>
#include <string>
using namespace std;

int y(int x){
    if (x==1){
    return 1;

    }else{
    return x*x+y(x-1);

    }
    
}
int main(){
int n;
do
{
   cout<<"Forneça um número: ";
   cin>>n;
   cout<< "y ="<<y(n);
} while (n<1);

}