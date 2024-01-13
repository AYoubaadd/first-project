#include<stdio.h>
#include<stdlib.h>
int longeur_chaine1(char t[]){
	int i=0;
    if(t[i]!='\0')i++;
    
return i;
}
int main()
{ int n1,n2;
char cTab1[]="aaDaaaa",cTab2[]="aaaaaa";

n1=longeur_chaine1(cTab1);printf("nbre de caractere de cTab1 : \n",n1);
n2=longeur_chaine1(cTab2);printf("nbre de caractere de cTab2 : \n",n2);
}
