#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()
{
    int i;
    float A[T], maior, menor, soma=0, media;
    printf("Digite um numero: ");
    scanf("%f", &A[0]);
    maior = A[0];
    menor = A[0];
    soma+= A[0];
    for(i=1; i<T; i++){
        printf("Digite um numero: ");
        scanf("%f", &A[i]);
        if(A[i]>maior){
            maior = A[i];
        }
        if(A[i]<menor){
            menor = A[i];
        }
        soma+= A[i];
    }
    media = soma/T;
    printf("\n");
    //imprimindo o vetor
    for(i=0; i<T; i++){
        printf("A[%d] = %.2f\n", i, A[i]);
    }
    printf("\nMaior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f", media);
    printf("\n");
    return 0;
}
