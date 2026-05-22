#include <iostream>
#define MAX 100
using namespace std;
   
char pilha[MAX];
int topo = 0;

void push(void);
void pop(void);
void verificar_palindromo(void);
 
int main()
{ 
    int sair = 1;
    
    while(sair){
        
        cout << endl;
        cout << "Qual sua opcao? (1) inserir, (2) remover, (3) sair e (4) verificar palindromo: ";
        cin >> sair;
        
        switch(sair){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                sair = 0;
                break;
            case 4:
                verificar_palindromo();
                break;
            default:
                continue;
        }
    }    
        
    cout << endl;           
    return 0;
}

void verificar_palindromo(void) {
    int half = topo / 2;
    int top = topo - 1;
    
    char compare;
    char compared;
    int i = 0;
    for (i; i < half; i++, top--) {
        compare = pilha[i];
        compared = pilha[top];
        if (compare != compared) {
            printf("Não é um palindromo");
            break;
        }
    }
    printf("É um palindromo");
}

void push(void)
{
    if(topo >= MAX){
        cout << "PIlha cheia!" << endl;
        return;
    }
    
    cout << "Comece a digitar..." << endl;
    cout << "Qual o valor? ";
    cin >> pilha[topo];
    cout << "Insercao com sucesso" << endl;
    
    topo++;
    
    return;
}

void pop(void)
{
    topo--;
    if(topo < 0){
        cout << "Pilha vazioa!" << endl;
        return;
    }
    cout << "Item removido foi: " << pilha[topo] << endl;
    
    return;
}
