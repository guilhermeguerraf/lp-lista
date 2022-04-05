#include <stdio.h>
#include <stdlib.h>
#define T 10
int main()
{
    int A[T], B[T];
    int i;
    for(i=0; i<T; i++){
        printf("Digite um numero para A[%d]: ", i);
        scanf("%d", &A[i]);
        if(i%2==0){
            B[i] = A[i]*5;
        }else{
            B[i] = A[i]+5;
        }
    }
    printf("\n");
    for(i=T-1; i>=0; i--){
        printf("A[%d] = %d;  B[%d] = %d\n", i, A[i], i, B[i]);
    }
    return 0;
}
