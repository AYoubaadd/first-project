#include<stdio.h>
#include<stdlib.h>
int main(){
    float T[3][4],s=0;
	int i,j;
		for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	{printf(" T[%d][%d]=",i,j);scanf("%f",&T[i][j]);
	}
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	s=s+T[i][j];
	printf(" la somme des elts est %2.f",s);
}