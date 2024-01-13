#include<stdio.h>
#include<stdlib.h>


int main()
{int i,j,h=0, N;


printf("saisir le nbre de ligne : \n");
scanf("%d",&N);

for(i=0;i<N;i++){

for(j=0;j<N-i-1;j++)printf(" ");

printf("*");
for(j=0;j<i+h;j++)printf(" ");
printf("*");h++;
	printf("\n");
}	
	for(i=0;i<2*N;i++)printf("*");
}