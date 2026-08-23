#include <stdio.h>

int main(){


    int inteiros[5], soma = 0;

    for (int i = 0; i < 5; i++){
        scanf("%d", &inteiros[i]);
    }

    for (int i = 0; i < 5; i++){
        soma += inteiros[i];
    }
    
    printf("Soma: %d\n", soma);
    return 0;
}