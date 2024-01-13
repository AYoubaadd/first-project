#include<stdio.h>
#include<stdlib.h>

typedef struct{
             int jour;
             char mois[10];
             int annee;
			  }date;
typedef struct{            
             char nom[15];
             char prenom[15];
             date date_naissance,date_embauche;
			  }employe;			  
			  	  
int main(){
   employe E[4];
   int i;
   for(i=0;i<4;i++){
   	printf("***Entrer le Nom de l employe %d :",i+1);
	scanf(" %s",&E[i].nom);
	printf("***Entrer le Prenom de l employe:");
	scanf("%s",&E[i].prenom);
	printf("***la date de naissance ***\n");
	printf("***Entrer le jour: ");
	scanf("%d",&E[i].date_naissance.jour);
	printf("***Entrer le mois: ");
	scanf(" %s",&E[i].date_naissance.mois);
	printf("***Entrer l annee: ");
	scanf("%d",&E[i].date_naissance.annee);
		printf("***la date d embauche ***\n");
	printf("***Entrer le jour: ");
	scanf("%d",&E[i].date_embauche.jour);
	printf("***Entrer le mois: ");
	scanf(" %s",&E[i].date_embauche.mois);
	printf("***Entrer l annee: ");
	scanf("%d",&E[i].date_embauche.annee);
   }

    printf("***La list des employes***\n");
	for(i=0;i<4;i++){
   	printf("-Nom :%s\n",E[i].nom);
	
	printf("-Prenom : %s\n",E[i].prenom);
	printf("la date de naissance : %d %s %d\n",E[i].date_naissance.jour,E[i].date_naissance.mois,E[i].date_naissance.annee);
	printf("la date d enbauche : %d %s %d\n\n\n",E[i].date_embauche.jour,E[i].date_embauche.mois,E[i].date_embauche.annee);
	
   }
}