#include <stdio.h>
#include <stdlib.h>

int ehperfeito(int n);

int main()
{
    int n, resp;
    printf("Digite um numero: ");
    scanf("%d", &n);
    resp=ehperfeito(n);
    printf("\nSomatoria dos divisores de %d excluindo ele mesmo = %d\n", n,resp);
    return 0;
}

int ehperfeito(int n){
    int soma=0;
    for(int i=1; i<n; i++)
        if(n%i==0) soma+=i;
    if(soma==n){
        printf("%d eh perfeito", n);
    }else{
        printf("%d nao eh perfeito", n);
    }
    return soma;
}
