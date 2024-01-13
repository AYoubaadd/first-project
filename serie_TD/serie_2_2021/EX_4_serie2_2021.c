#include<stdio.h>
#include<stdlib.h>
int main()
{int tab[10],i,j;
   
 
   for(i=0;i<10;i++){
   	 printf("entrer le nbre N%d: \n",i+1);
   	 scanf("%d",&tab[i]);
   }
   
   int max=tab[0] , min=tab[0];
   
   for(i=1;i<10;i++){
   
   	 if(tab[i]>max) max=tab[i];
   	  if(tab[i]<min) min=tab[i];
    }
   
   
   for(i=0;i<10;i++)printf("tab[%d]=%d \n",i+1,tab[i]);
printf("le max de tab : %d \n le min de tab : %d\n",max,min);
}