#include<stdio.h>
#include<stdlib.h>

void affiche_mat(int iMt[2][2]){
	int i, j;
	printf("les elements de matrice : \n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)printf("  %d  ",iMt[i][j]);
}

int main()
{ int iMt[2][2]={1 ,2 ,3 ,4};
 
affiche_mat(iMt[2][2]);


}
