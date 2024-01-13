#include<stdio.h> 
#include<stdlib.h>
int main()
{  int n ,a,i,j;
printf("donner un nbr :\n" );
scanf("%d",&n);
for( i=0;i<n;i++){

for( a=0;a<i;a++) printf(" ");

 for(j=0;j<n-i;j++)printf("%d",i);printf("\n"); }
     }