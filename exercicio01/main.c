#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    int A[T];
    int i, somaImpar=0, somaPar=0;
    int contImpar=0;
    float porcentagem;
    //entrando com dados
    for(i=0; i<T; i++){
        printf("Digite um numero: ");
        scanf("%d", &A[i]);
        //verificando se é par ou impar
        if(A[i]%2==0){
            somaPar += A[i];
        }else{
            somaImpar += A[i];
            contImpar++;
        }
    }
    printf("\nSoma Impar = %d\n", somaImpar);
    printf("Soma Par = %d\n", somaPar);
    printf("Soma Total = %d\n", somaImpar + somaPar);
    porcentagem = ((float)contImpar / (float)T)*100;
    printf("\nPorcentagem de numeros impares = %.2f%%\n", porcentagem);
    return 0;
}
