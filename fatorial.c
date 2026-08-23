#include <stdio.h>

int main(){
    int n, i = 0;
    int nfatorial = 1;


    scanf("%d", &n);

    for (i = n; i > 1; i--){
        nfatorial *= i;
    }
    
    
    printf("%d! = %d", n, nfatorial);
    return 0;
}