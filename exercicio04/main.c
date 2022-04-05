#include <stdio.h>
#include <stdlib.h>
#define T 10
int main()
{
    int i, n, par[T];
    for(i=0; i<T; i++){
        printf("%d Insira um numero par inteiro: ", i);
        scanf("%d", &n);
        if(!(n%2==0)){
            printf("\nNumero invalido, insira um valor PAR inteiro!\n\n");
            i--;
        }else{
            par[i] = n;
        }
    }
    printf("\n");
    for(i=T-1; i>=0; i--){
        printf("par[%d] = %d\n", i, par[i]);
    }
    return 0;
}
