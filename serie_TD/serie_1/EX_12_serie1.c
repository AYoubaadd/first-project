#include<stdio.h>
#include<stdlib.h>


int main()
{int i,j, N;


printf("saisir le nbre de ligne (impaire): \n");
scanf("%d",&N);

for(i=0;i<N;i++){
	for(j=0;j<N;j++)if(i==0||i==N-1||j==0||j==N-1)printf("* ");
	                else if(i==j||i==(N-j-1))printf("+ ");
	                else if(j==(N/2)||i==(N/2))printf("- ");
	                else printf("  ");printf("\n");
}

}