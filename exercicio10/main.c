#include <stdio.h>
#include <stdlib.h>
#define L 4
#define N 2
int main()
{
    int A[L][N]={{0}}, B[L][N]={{0}};
    int i, j;
    //incrementando A
    printf("Defina os valores para a matriz A:\n");
    for(i=0; i<L; i++){
        for(j=0; j<N; j++){
            printf("Insira um valor para A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n");
    //incrementando B
    printf("Defina os valores para a matriz B:\n");
    for(i=0; i<L; i++){
        for(j=0; j<N; j++){
            printf("Insira um valor para B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    int C[L][N]={{0}};
    //calculando C
    for(i=0; i<L; i++){
        for(j=0; j<N; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\n");
    //imprimindo A
    printf("A:");
    for(i=0; i<L; i++){
        printf("\n");
        for(j=0; j<N; j++){
            printf("[%3d]   ", A[i][j]);
        }
    }
    //imprimindo B
    printf("\n\nB:");
    for(i=0; i<L; i++){
        printf("\n");
        for(j=0; j<N; j++){
            printf("[%3d]   ", B[i][j]);
        }
    }
    //imprimindo C
    printf("\n\nC:");
    for(i=0; i<L; i++){
        printf("\n");
        for(j=0; j<N; j++){
            printf("[%3d]   ", C[i][j]);
        }
    }
    return 0;
}
