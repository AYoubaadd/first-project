#include<stdio.h>
#include<stdlib.h>
int main(){
    float T[3][4],s=0;
	int i,j;
	float *d,*f;
	d=&T[0][0];
		for(i=0;i<3;i++)
	for(j=0;j<4;j++)
	{printf(" T[%d][%d]=",i,j);scanf("%f",&T[i][j]);
	}
	
    while(*d!='\0'){s=s+(*d);d++;
	}
	
	printf(" la somme des elts est %2.f",s);
}