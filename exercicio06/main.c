#include <stdio.h>
#include <stdlib.h>
#define T 10
int main()
{
    float A[T], somaPos=0;
    int i, quantNeg=0;
    for(i=0; i<T; i++){
        printf("Insira um valor Real: ");
        scanf("%f", &A[i]);
        if(A[i]>=0){
            somaPos+= A[i];
        }else{
            quantNeg++;
        }
    }
    printf("\nQuantidade de numeros negativos: %d\n", quantNeg);
    printf("Somatoria dos numeros positivos: %.2f\n", somaPos);
    return 0;
}
