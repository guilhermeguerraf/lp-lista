#include <stdio.h>
#include <stdlib.h>

int verificar_sinal(int valor){
    if(valor>0){
        return 1;
    }else if(valor==0){
        return 0;
    }else{
        return -1;
    }
}

int main()
{
    int n;
    printf("Insira um numero: ");
    scanf("%d", &n);
    printf("%d", verificar_sinal(n));
    return 0;
}

