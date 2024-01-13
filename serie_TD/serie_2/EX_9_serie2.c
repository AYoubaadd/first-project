#include<stdio.h>
#include<stdlib.h>
#include<string.h>


char* saisir(char *T) {fflush(stdin);
    printf("Entrer votre texte :\n");
    gets(T);
    char *result = malloc(strlen(T) + 1);
    strcpy(result, T);

    return result;
}
void afficher(char *T){
    printf("\n");
    fflush(stdin);
    puts(T);
}
void inverse(char *T){
	int n,i;
	n=strlen(T);
	char *t;
	t=(char*)malloc((n+1)*sizeof(char));
	for(i=0;i<n;i++)t[i]=T[n-i-1];t[n]='\0';
    strcpy(T,t);
    free(t);
}

void mots(char *T){
	int n,i,c=0;
	n=strlen(T);
	for(i=0;i<n;i++)
	if(T[i]==' '&&T[i+1]!=' ')c++;
	printf("le nbre de mots est: %d\n",c+1);
}

int main(){
    int i;
    char *T, t;
    T = (char*)malloc(100 * sizeof(char));

    do{
	system("cls");
    printf("entrer le num de votre chois:\n");
    d:printf("1-saisir\n2-afficher\n3-inverse\n4-nbre de mots\n");
    scanf("%d",&i);
    switch (i){
    	case 1:{T=saisir(T);	break;}
		case 2:{afficher(T);break;}
	    case 3:{inverse(T);afficher(T);break;}
		case 4:{mots(T);break;}
		default:
            printf("non valide.\n");
            goto d;	
		}
    	  printf("le menu O/N:");
    	  fflush(stdin);
		    scanf(" %c",&t);		
	}while(t=='O'||t=='o');
	system("cls"); printf("Au revoir");
}