#include<stdio.h>
#include<stdlib.h>

typedef struct {
	int nb_elem;
	int *tab;
}TypeTableau;
	TypeTableau T;
TypeTableau Creation_Tableau(int n){
	TypeTableau tabl;
	
	tabl.nb_elem=n;
	tabl.tab=(int*)malloc(n*sizeof(int));
	
	return tabl;
	
}

void Destruction_Tableau(TypeTableau T){
	free(T.tab);
}

void Simple_Lecture_Tableau(TypeTableau T){
	int i;
	for(i=0;i<T.nb_elem;i++){
		printf("T[%d]=",i+1);
		scanf("%d",&T.tab[i]);
	}
}

void Affichage(TypeTableau T){
	int i;
	for(i=0;i<T.nb_elem;i++){
		printf("T[%d]=%d \n",i+1,T.tab[i]);	
	}
}

TypeTableau Double_Tableau(TypeTableau T){
	TypeTableau tabl;
	int i;
	tabl.nb_elem=T.nb_elem;
	tabl.tab=(int*)malloc(T.nb_elem*sizeof(int));
	
	for(i=0;i<T.nb_elem;i++){
		tabl.tab[i]=T.tab[i]*T.tab[i];
	}
	return tabl;
	
}

int main(){
	TypeTableau T;
	int n;
	printf("donner la taile du tableau :");
	scanf("%d",&n);
	T=Creation_Tableau(n);
	Simple_Lecture_Tableau(T);
	printf("\nvotre tableau :\n ");
	Affichage(T);
	printf("\n le double des elts du tableau:\n");
	T=Double_Tableau(T);
	Affichage(T);
	Destruction_Tableau(T); 
}
