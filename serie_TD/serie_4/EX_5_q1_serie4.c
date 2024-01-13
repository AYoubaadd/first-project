#include<stdio.h>
#include<stdlib.h>
#include<string.h>
              
int nb_occurrence(char T[],int n,char c){
	int i,j=0,p,d,check=-1;
	for(i=0;i<n;i++){	
		if(T[i]==c){p=i;check++;
		}
		if(check!=-1)break;
	}
	for(i=0;i<n;i++){	
		if(T[i]==c){d=i;j++;
		}
	}
	printf("p_occ = %d\nd_occ = %d\n",p+1,d+1);
	return j;
}
              
int main(){
	int n,i;
    char T[30],c;

		printf("entrer la chaine de caractere :");
		scanf(" %s",T);
		printf("entrer le caractere :");
		scanf(" %c",&c);
		n=strlen(T);
    i=nb_occurrence(T,n,c);
     printf("nbre d occurence de %c : %d",c,i);
}