#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	float largeur;
	float longueur;
	float epaisseur;
	int code ;
               }Panneau;

void saisie(Panneau *P){
	
	printf("Entrer la largeur en mm:");
	scanf("%f",&P->largeur);
	printf("Entrer la longueur en mm:");
	scanf("%f",&P->longueur);
	printf("Entrer l epaisseur en mm:");
	scanf("%f",&P->epaisseur);	
	printf("Entrer le code 0, 1 ou 2 :");
	scanf("%d",&P->code);
}
     
void afficher(Panneau *P){
	
	printf("la largeur :%2.fmm\n",P->largeur);
	
	printf("la longueur :%2.fmm\n",P->longueur);
	
	printf("Entrer l epaisseur:%2.fmm\n",P->epaisseur);
	
	printf("Type de bois:");
	if(P->code==0)printf("Pin\n");
	if(P->code==1)printf("chene\n");
	if(P->code==2)printf("hete\n");
}
void volume(Panneau *P){
	float v;
	v=((P->largeur)*(P->longueur)*(P->epaisseur))/1000;
	printf("Le volume :%2.fm^3\n",v);
}
	          
int main(){
	Panneau *P;
	
	saisie(P);
	afficher(P);
	volume(P);
	
}