#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "ararda";
    int size = strlen(str) / 2;

    char compare;
    char compared;

    for (int i = 0; i <= size; i++) {
        compare = str[i];
        compared = str[size + i];

        if (compare != compared) {
            printf("Não é palindromo\n");
            break;
        }
    }
    
    return 0; 
}