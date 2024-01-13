#include<stdio.h> 
#include<stdlib.h>
int main()
{  int T[20],i;

   for(i=0;i<20 ;i++){
   	printf("\n entrer le nbr N %d: ",i+1);
   	scanf("%d",&T[i]);
   }
   printf("les nbrs pairs ds le tableau et leurs carees \n ");
   for(i=0;i<20 ;i++){
   	 if(T[i]%2==0) 	printf("T[%d]=%d\t ||\t %d \n ",i,T[i],T[i]*T[i]);
   }

}