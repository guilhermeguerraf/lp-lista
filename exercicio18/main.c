#include <stdio.h>
#include <stdlib.h>

long int calcular_pot(int x, int n);

int main()
{
    int x,n;
    long int f;
    printf("Calculo de x^n\n");
    printf("Informe x e n, respectivamente:\n");
    scanf("%d %d", &x,&n);
    f=calcular_pot(x,n);
    printf("%d ^ %d = %ld", x,n,f);
    return 0;
}

long int calcular_pot(int x, int n){
    long int result=1;
    for(int i=0;i<n;i++)
        result*=x;
    return result;
}
