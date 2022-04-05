#include <stdio.h>
#include <stdlib.h>
#define A 5 //alunos
#define R 10 //respostas
int main()
{
    char m[A][R];
    char gabarito[R];
    int resultado[A]={0};
    int i, j;
    //Definindo gabarito
    for(i=0;i<R;i++){
        printf("Gabarito da questao %d: ", i+1);
        scanf(" %c", &gabarito[i]);
    }
    printf("\n");
    //Entrando com os dados da matriz
    for(i=0; i<A; i++){
        //system("cls");
        printf("\n");
        for(j=0; j<R; j++){
            printf("Resposta do aluno %d para a questao %d: ", i+1, j+1);
            scanf(" %c", &m[i][j]);
        }
    }
    //Calculando o resultado
    for(i=0; i<A; i++){
        for(j=0; j<R; j++){
            if(m[i][j] == gabarito[j])
                resultado[i]++;
        }
    }
    //system("cls");
    printf("\n");
    //imprimindo gabarito
    printf("Gabarito: ");
    for(j=0; j<R; j++){
        printf("%c   ", gabarito[j]);
    }
    printf("\n");
    //imprimindo matriz
    for(i=0; i<A; i++){
        printf("\n\n Aluno %d: ", i);
        for(j=0; j<R; j++){
            printf("%c   ", m[i][j]);
        }
    }
    //imprimindo resultado
    printf("\n\n\nResultado\n");
    for(i=0; i<A; i++){
        printf("Aluno %d = %d\n", i, resultado[i]);
    }
    return 0;
}
