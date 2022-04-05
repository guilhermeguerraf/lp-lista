#include <stdio.h>
#include <stdlib.h>
#define D 7
int main()
{
    int id[D][D]={0};
    int i;
    //definindo a matriz identidade
    for(i=0;i<D;i++){
        id[i][i]=1;
    }
    int j;
    //imprimindo a matriz
    for(i=0;i<D;i++){
        printf("\n");
        for(j=0;j<D;j++){
            printf("%3d  ", id[i][j]);
        }
    }
    return 0;
}
