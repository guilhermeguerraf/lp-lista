#include <stdio.h>
#include <stdlib.h>
#define D 5
int main()
{
    int i, j, z[D][D]={0};
    //inserindo valores para a matriz triangular superior
    for(i=0; i<D; i++){
        for(j=0; j<D; j++){
            if(i==0){
                printf("Digite um valor para z[%d][%d]: ", i, j);
                scanf("%d", &z[i][j]);
            }else if(i==1){
                while((j>0)&&(j<D)){
                    printf("Digite um valor para z[%d][%d]: ", i, j);
                    scanf("%d", &z[i][j]);
                    j++;
                }
            }else if(i==2){
                while((j>1)&&(j<D)){
                    printf("Digite um valor para z[%d][%d]: ", i, j);
                    scanf("%d", &z[i][j]);
                    j++;
                }
            }else if(i==3){
                while((j>2)&&(j<D)){
                    printf("Digite um valor para z[%d][%d]: ", i, j);
                    scanf("%d", &z[i][j]);
                    j++;
                }
            }else if(i==4){
                while((j>3)&&(j<D)){
                    printf("Digite um valor para z[%d][%d]: ", i, j);
                    scanf("%d", &z[i][j]);
                    j++;
                }
            }
        }
    }
    //imprimindo matriz
    for(i=0; i<D; i++){
        printf("\n");
        for(j=0; j<D; j++){
            printf("%3d   ", z[i][j]);
        }
    }
    return 0;
}
