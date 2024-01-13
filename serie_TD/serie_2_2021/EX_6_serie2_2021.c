#include<stdio.h>
#include<stdlib.h>


int main()
{char tab[20];
int i=0;
   
 
   
   	 printf("saisir ton nom : \n");
   	 scanf("%s",tab);
 
    while(tab[i]!='\0'){
    	i++ ;
	}
  printf("le nbre de caractere de ton nom est : %d\n",i);
}