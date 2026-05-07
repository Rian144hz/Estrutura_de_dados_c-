#include <iostream>
#include <string>
using namespace std;


void ant(int x){
    if (x==0){
    return;
    
    }
    cout<<x<<endl;
    ant(x-1);



    }
         
          
     

int main(){
   int n;
 do{
   cout<<"Forneça um número: ";
   cin>>n;
 }  while (n<=0);

     ant(n);
 
}
