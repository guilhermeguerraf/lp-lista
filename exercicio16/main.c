#include <stdio.h>
#include <stdlib.h>

long int SomaDivisores(int n);

int main()
{
    int n, s;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    s = SomaDivisores(n);
    printf("Somatoria dos divisores de %d = %d", n, s);
    return 0;
}

long int SomaDivisores(int n){
    long int soma=0;
    for(int i=1; i<=n; i++)
        if(n%i==0) soma+=i;
    return soma;
}
