#include<stdio.h>
#include<stdlib.h>

typedef struct{
	         char nom[10];
	         char prenom[10];
             int CNE;
             float notes[4],moyenne;
			  }etudiant;
			  
			  	  
int main(){
   etudiant T[2],temp;
   int i,j;float max;
   for(i=0;i<2;i++){
   	printf("***Entrer le Nom de l etudiant %d :",i+1);
	scanf(" %s",&T[i].nom);
	printf("***Entrer le Prenom de l etudiant:");
	scanf("%s",&T[i].prenom);
	printf("***Entrer le CNE ");
	scanf("%d",&T[i].CNE);
	printf("***Entrer la note %d : ",1);
	scanf(" %f",&T[i].notes[0]);
	printf("***Entrer la note %d : ",2);
	scanf(" %f",&T[i].notes[1]);
	printf("***Entrer la note %d : ",3);
	scanf(" %f",&T[i].notes[2]);
	printf("***Entrer la note %d : ",4);
	scanf(" %f",&T[i].notes[3]);
	T[i].moyenne=(T[i].notes[0]+T[i].notes[1]+T[i].notes[2]+T[i].notes[3])/4;
   }

    printf("***La list des etudiants***\n");
   for(i=0;i<2;i++){
   	printf("*** Nom :%s\n",T[i].nom);
	
	printf("*** Prenom :%s\n",T[i].prenom);
	printf("*** CNE : %d\n",T[i].CNE);
	
	printf("***Note : %2.f   %2.f    %2.f   %2.f\n",T[i].notes[0],T[i].notes[1],T[i].notes[2],T[i].notes[3]);
    printf("***Moyenne : %2.f\n",T[i].moyenne);
   }
   
   max=T[0].moyenne;
   for(i=0;i<2;i++)
   if(T[i].moyenne>max) max=T[i].moyenne;
   printf("***L etudiant ayant la plus grande moyenne***\n");
   for(i=0;i<2;i++){
   if(T[i].moyenne==max){
   	printf("*** Nom :%s\n",T[i].nom);
	
	printf("*** Prenom :%s\n",T[i].prenom);
	printf("*** CNE : %d\n",T[i].CNE);
	
	printf("***Note : %2.f   %2.f    %2.f   %2.f\n",T[i].notes[0],T[i].notes[1],T[i].notes[2],T[i].notes[3]);
    printf("***Moyenne : %2.f\n",T[i].moyenne);break;
   }
   }
   for(i=0;i<2;i++)
    for(j=i;j<2;j++){
    	if(T[i].moyenne<T[j].moyenne){
    		temp=T[i];T[i]=T[j];T[j]=temp;
		}
   }
   
      printf("***La list des etudiants trie***\n");
   for(i=0;i<2;i++){
   	printf("*** Nom :%s\n",T[i].nom);
	printf("*** Prenom :%s\n\n\n",T[i].prenom);
	
   }
}