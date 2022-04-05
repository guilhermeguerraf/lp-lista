#include <stdio.h>
#include <stdlib.h>

long int potencia(int base, unsigned int expoente){
    int baseexpoente=1;
    for(int i=0;i<expoente;i++)
        baseexpoente = baseexpoente * base;
    return baseexpoente;
}

int main()
{
    int b,e;
    printf("Calculo de potencia\n");
    printf("Insira um valor para a base: ");
    scanf("%d", &b);
    printf("Insira um valor para o expoente: ");
    scanf("%d", &e);
    while(e<1){
        printf("\nExpoente tem que ser maior ou igual a 1!\n");
        printf("Insira um valor para o expoente: ");
        scanf("%d", &e);
    }
    printf("%d ^ %d = %ld", b,e,potencia(b,e));
    return 0;
}
