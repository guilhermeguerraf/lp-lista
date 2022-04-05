#include <stdio.h>
#include <stdlib.h>
#define T 4
int main()
{
    float a, b;
    int va[T]={0}, vb[T]={0};
    int i;
    printf("Insira um numero para a:\n");
    scanf("%f", &a);
    printf("Insira um numero para b:\n");
    scanf("%f", &b);
    if((a<0 || a>=10000)||(b<0 || b>=10000)){
        printf("Numero invalido!\nValido somente numeros positivos inteiros entre 0 e 9999.");
    }else{
        //dados de va
        if(a>=1000){
            a=a/10000;
            for(i=T-1; i>=0; i--){
                a=((a-(int)a)+0.0000001)*10; // problemas com arredondamento
                va[i]=(int)a;
            }
        }else if(a>=100){
            a=a/1000;
            for(i=T-2; i>=0; i--){
                a=((a-(int)a)+0.0000001)*10;
                va[i]=(int)a;
            }
        }else if(a>=10){
            a=a/100;
            for(i=T-3; i>=0; i--){
                a=((a-(int)a)+0.0000001)*10;
                va[i]=(int)a;
            }
        }else{
            va[0]=(int)a;
        }
        //dados de vb
        if(b>=1000){
            b=b/10000;
            for(i=T-1; i>=0; i--){
                b=((b-(int)b)+0.0000001)*10;
                vb[i]=(int)b;
            }
        }else if(b>=100){
            b=b/1000;
            for(i=T-2; i>=0; i--){
                b=((b-(int)b)+0.0000001)*10;
                vb[i]=(int)b;
            }
        }else if(b>=10){
            b=b/100;
            for(i=T-3; i>=0; i--){
                b=((b-(int)b)+0.0000001)*10;
                vb[i]=(int)b;
            }
        }else{
            vb[0]=(int)b;
        }
    //imprimindo va e vb
    printf("\n");
    printf("Pos   va   vb\n");
    for(i=0; i<T; i++)
        printf(" %d    %d    %d\n", i, va[i], vb[i]);
    }
    return 0;
}
