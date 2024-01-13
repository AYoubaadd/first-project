#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int distanceH(char S1[],char S2[]){
	int n,i,c=0;
	n=strlen(S1);
	for(i=0;i<n;i++)
	if(S1[i]!=S2[i])c++;
	return c;
}
int distanceH_langage(char langage[]) {
    int i,j,k,n,c,ch,l;
    char a[10],b[10];
    n=strlen(langage);
    ch=0;
    for(i=0;i<n;i++){
        j=0;
        while(langage[i]!=' ' && langage[i]!='\0'){
            a[j]=langage[i];
            i++;
            j++;
        }
        a[j]='\0';
        l=i;
        while(langage[l] !='\0'){
            j=0;
            while(langage[l] !=' ' && langage[l] !='\0'){
                b[j]=langage[l];
                l++;
                j++;
            }
            b[j]='\0';
            int m=strlen(b);
            c=0;
            for(k=0;k<m;k++)
                if(b[k]!=a[k])
                    c++;
            if (c<ch || ch==0)
                ch=c;
            l++;
        }
    }
    return ch;
}
  
void decToBinary(int decimal, int binary[8]){
 	int i;
 	for (i =7;i>=0;i--) {
        binary[i]=decimal%2;
        decimal/=2;
    }

 }  
int main(){
	char S1[20],S2[20],langage[30];
	int n,m,c=0,reslt;
d:	printf("entrer un mot: ");
	scanf("%s",S1);
	n=strlen(S1);
	printf("entrer un autre mot: ");
	scanf("%s",S2);
	m=strlen(S2);
	if(n!=m){printf("les deux mots doivent avoir la meme longueur. \n");goto d;}
	reslt=distanceH(S1,S2);
    printf("la distance de Hamming entre %s et %s est : %d\n\n",S1,S2,reslt);
    
    printf("entrer une phrase ou tout ses mots ont la meme longueur:\n");
    fflush(stdin);
    gets(langage);
    reslt=distanceH_langage(langage);
    printf("la distance de Hamming est : %d\n",reslt);
    
    
    int decimal1,decimal2,i;
    int *T,*t;
    T=(int*)malloc(8*sizeof(int));
    t=(int*)malloc(8*sizeof(int));
    dee:printf("Entrer le 1er nbre entre 0 et 255 : ");
    scanf("%d", &decimal1);
    if (decimal1<0||decimal1>255) {
        printf("Le nombre doit être dans la plage de 0 à 255.\n");
        goto dee;
        }
    de:printf("Entrer le 2eme nbre entre 0 et 255 : ");
    scanf("%d", &decimal2);
    if (decimal2<0||decimal2>255) {
        printf("Le nombre doit être dans la plage de 0 à 255.\n");
        goto de;
        }    
     decToBinary(decimal1,T);    printf("%d : ",decimal1);for(i=0;i<8;i++)printf("%d",T[i]);printf("\n");
     decToBinary(decimal2,t);printf("%d : ",decimal2);for(i=0;i<8;i++)printf("%d",t[i]);;printf("\n");
     for(i=0;i<8;i++){
     	if(T[i]!=t[i])c++;
	 }
        printf("La distance de Hamming entre %d et %d est : %d\n",decimal1,decimal2,c);
}