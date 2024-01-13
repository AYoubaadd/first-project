#include<stdio.h> 
#include<stdlib.h>
int main()
{ int a,s=0,i;
do{printf("entrer un nbre >1\n");
     scanf("%d",&a);}while(a<=1);
     
     for(i=2;i<=(a/2);i++){ if(a%i==0) s++;}
     
     if(s==0)printf("%d est premier \n",a);
     
     else printf("%d n est pas premier \n",a);
     
     

     }
