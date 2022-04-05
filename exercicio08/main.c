#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()
{
    int i, A[T], maior, menor, posMaior, posMenor;
    printf("Insira um valor: ");
    scanf("%d", &A[0]);
    maior = A[0];
    posMaior = 0;
    menor = A[0];
    posMenor = 0;
    for(i=1; i<T; i++){
        printf("Insira um valor: ");
        scanf("%d", &A[i]);
        if(A[i]>maior){
            maior = A[i];
            posMaior = i;
        }else if(A[i]<menor){
            menor = A[i];
            posMenor = i;
        }
    }
    printf("\nPosicao com o maior valor: A[%d]\n", posMaior);
    printf("Posicao com o menor valor: A[%d]", posMenor);
    return 0;
}
