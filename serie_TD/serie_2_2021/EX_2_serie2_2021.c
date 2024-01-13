#include<stdio.h>
#include<stdlib.h>
int main()
{int t[100],i,c=10;
   
   
   for(i=0;i<100;i++){
   	t[i]=i;
   }
   for(i=0;i<100;i++){
   	while(i==c){
   		printf("\n");c+=10;
	   }
   	printf("%d,",t[i]);
   }
   
}