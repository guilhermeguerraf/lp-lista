#include <stdio.h>
#include <stdlib.h>
#define T 10
int main()
{
    int i, a[T];
    //entrando com dados no vetor
    for(i=0; i<T; i++){
        printf("insira um numero inteiro: ");
        scanf("%d", &a[i]);
    }
    printf("\n");
    //imprimindo os dados do vetor na ordem inversa
    for(i=T-1; i>=0; i--){
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}
