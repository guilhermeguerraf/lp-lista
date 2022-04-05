#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define D 9
#define M D*D

int main()
{
    int a[D][D]={0};
    int n;
    srand(time(NULL));
    int i, j;
    for(i=0;i<D;i++){ // entrando com dados na matriz
        for(j=0;j<D;j++){
            // gerando numeros aleatorios
            n=rand()%1000; // o numero gerado será entre 0 e 999
            if(!(n%2==0)){ // só será aceito pela matriz numeros impares
                a[i][j]=n;
            }else{
                j--; // caso o numero gerado for par o valor de j irá retroceder até que gere um número impar
            }
        }
    }
    printf("matriz a:\n"); // imprimindo a matriz
    for(i=0;i<D;i++){
        for(j=0;j<D;j++){
            printf("%4d  ", a[i][j]);
        }
        printf("\n");
    }
    int v[M]={0};
    int k=0;
    while(k<M){ // preenchendo o vetor com os valores da matriz
        for(i=0;i<D;i++){
            for(j=0;j<D;j++){
                v[k]=a[i][j];
                k++;
            }
        }
    }
    int aux; // variável usada como auxiliar para ordenação do vetor
    for(k=0;k<M;k++){ // ordenando os valores do vetor em ordem crescente
        for(i=k+1;i<M;i++){
            if(v[k]>v[i]){
                aux=v[k];
                v[k]=v[i];
                v[i]=aux;
            }
        }
    }
    printf("\nvetor v:\n"); // imprimindo vetor
    for(i=0;i<M;i++)
        printf("%2d - %3d\n", i,v[i]);
    return 0;
}
