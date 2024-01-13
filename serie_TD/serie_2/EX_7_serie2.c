#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void addition(float a, float b) {
    printf("Resultat : %.2f\n",a+b);
}

void soustraction(float a, float b) {
    printf("Resultat : %.2f\n", a - b);
}

void multiplication(float a, float b) {
    printf("Resultat : %.2f\n",a*b);
}

void division(float a, float b) {
    if (b!=0) {
        printf("Resultat : %.2f\n",a/b);
    } else{
        printf("Division par zero impossible.\n");
    }
}

void modulo(float a, float b) {
    if (b!=0){
        printf("Resultat : %.2f\n",fmod(a, b));
    } else {
        printf("Modulo par zero impossible.\n");
    }
}


int main(){
    int i;
    float a,b;
    char t;
    printf("donner un nbre a:");
    scanf("%f",&a);
    printf("donner un nbre b:");
    scanf("%f",&b);
    do{
	system("cls");
    printf("entrer le num d operateur:\n");
    d:printf("1-pour addition\n2-pour la soustraction\n3-pour la multiplication\n4-pour la division\n5-pour le modulo\n");
    scanf("%d",&i);
    switch (i){
    	case 1:{addition(a,b);	break;}
		case 2:{soustraction(a,b);break;}
	    case 3:{multiplication(a,b);break;}
		case 4:{division(a,b);break;}
		case 5:{modulo(a,b);break;}
		default:
            printf("Operateur non valide.\n");
            goto d;	
		}
    	  printf("tu veux recommencer O/N:");
		    scanf(" %c",&t);		
	}while(t=='O'||t=='o');
	system("cls"); printf("Au revoir");
}