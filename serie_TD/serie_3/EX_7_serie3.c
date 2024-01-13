#include<stdio.h>
#include<stdlib.h>

int check_nbr(float T[],int n,float  nb);

int main(){
   float T[100],nb;
   int n,i,j;
   printf("entrer le nbre d elts que tu veux inserer  :");
   scanf("%d",&n);
   for(i=0;i<n;i++){
        printf("entrer l elet %d :",i+1);
    	scanf("%f",&T[i]);}
    
    printf("entrer le nbre a chercher  :");
    scanf("%f",&nb);
   j= check_nbr(T,n,nb);
   if(j==-1)printf("%2.f n existe pas dans le tableau ",nb);
   else printf("l indice de %2.f dans le tableau :%d",nb,j+1);
}

int check_nbr(float T[],int n,float nb){
	int i;
	 

       for(i=0;i<n;i++){
        if(T[i]==nb){return i;}
    }
    return -1;
}
