#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char nom[15];
	char prenom[15];
	char tele[15];
              }repertoire;
              
void affichage(repertoire *r,int n){
	int i;
	for(i=0;i<n;i++){
		
		printf("-le nom : %s\n",r[i].nom);
		printf("-le prenom :%s\n",r[i].prenom);
		printf("-le num de telephone : %s\n\n",r[i].tele);
	}
	
}
              
int main(){
	int n,i;
	repertoire *r;
	printf("Combien de repertoires veux-tu ? ");
	scanf("%d",&n);
	r=(repertoire*)malloc(n*sizeof(repertoire));
	
	for(i=0;i<n;i++){
		printf("entrer le nom :");
		scanf(" %s",&r[i].nom);
		printf("entrer le prenom :");
		scanf(" %s",&r[i].prenom);
		printf("entrer le num de telephone :");
		scanf(" %s",&r[i].tele);
	}system("cls");
affichage(r,n);
}