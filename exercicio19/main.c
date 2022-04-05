#include <stdio.h>
#include <stdlib.h>

int validar_data(int dia, int mes, int ano);

int main()
{
    int dia, mes, ano, resp;
    printf("Insira uma data(dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);
    resp=validar_data(dia, mes, ano);
    printf("%d", resp);
    return 0;
}

int validar_data(int dia, int mes, int ano){
    if(dia<0 || dia>31 || mes<0 || mes>12 || ano<0){
        return 0; //Data invalida
    }else if((mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12) && dia<=31){
        //meses com 31 dias
        return 1; //Data valida
    }else if((mes==4 || mes==6 || mes==9 || mes==11) && dia<=30){
        //meses com 30 dias
        return 1; //Data valida
    }else if(((ano%4==0) || (ano%400==0)) && mes==2 && dia<=29){
        //ano bissexto
        //fevereiro com 29 dias
        return 1; //Data valida
    }else if(mes==2 && dia<=28){
        //fevereiro com 28 dias
        return 1; //Data valida
    }else{
        return 0; //Data invalida
    }
}
