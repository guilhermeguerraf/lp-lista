#include <stdio.h>
#include <stdlib.h>
#define T 15

int main()
{
    float A[T], mediaGeral=0, somaGeral=0;
    int i;
    for(i=0; i<T; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &A[i]);
        somaGeral += A[i];
    }
    mediaGeral = somaGeral/(float)T;
    printf("\nMedia Geral dos alunos: %2.2f", mediaGeral);
    return 0;
}
