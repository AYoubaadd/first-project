#include<stdio.h>
#include<stdlib.h>

int main()
{
char tab[38]={'Cycle'}, c;
int j=0,n,pos;
   
 
   while(tab[j]!='\0'){
   	if(tab[j]=='m') { n=j; }   
   	 else j++;
   }
   
   	 printf("la position de la lettre m est :%d \n",n+1);
   	 
   	 printf("saisir une lettre qlq : \n");
   	 scanf("%c",&c);
 
    j=0;

	 while(tab[j]!='\0'){
   	if(tab[j]=='c') { n=pos; break;}   
   	 else j++;
   }
   
   	 printf("la position de la lettre %c est :%d \n",c,pos+1);
}