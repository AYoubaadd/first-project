#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int ref;
	float prix;
	int qt_disp ;
               }Produit;

void saisie(Produit *P){
	
	printf("Entrer le reference  1,2,3ou4:");
	scanf("%d",&P->ref);
	printf("Entrer le prix en dh:");
	scanf("%f",&P->prix);	
	printf("Entrer la qt:");
	scanf("%d",&P->qt_disp);
}
     
void afficher(Produit  *P){
	
	printf("le produit:");
	if(P->ref==1)printf("Des cartes meres\n");
	 if(P->ref==2)printf("Des proccesseurs\n");
	if(P->ref==3)printf("Des barrettes memoire\n");
	if(P->ref==4)printf("Des graphiques\n");
}

	printf("Le prix :%2.f dh\n",P->prix);
	printf("qt diponible : %d\n",P->qt_disp);
	
	
	          
int main(){
	Produit  *P;
	
	saisie(P);
	afficher(P);
	
	
}