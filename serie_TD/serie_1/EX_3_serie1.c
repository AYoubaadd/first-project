#include <stdio.h>

int main(){

    int nb;
    printf("entrer le nombre des feuilles: ");
    scanf("%d",&nb);
    if(nb<=10){
            printf("le totale:%d",nb);
    }
    else if(nb>10 && nb<=30){
        printf("le totale:%f",nb*0.6);
    }
    else if(nb>30){
        printf("le totale:%f",nb*0.4);
    }
    return 0;
}