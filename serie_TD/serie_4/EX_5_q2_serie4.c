#include<stdio.h>
#include<stdlib.h>
#include<string.h>
              
int nb_occurrence(char T[],int n,char c,int *p_occ,int *d_occ){
	int i,j=0,check=-1;
	for(i=0;i<n;i++){	
		if(T[i]==c){*p_occ=i;check++;
		}
		if(check!=-1)break;
	}
	for(i=0;i<n;i++){	
		if(T[i]==c){*d_occ=i;j++;
		}
	}
	
	return j;
}
              
int main(){
	int n,i;
    char T[30],c;
    int *p_occ,*d_occ;
		printf("entrer la chaine de caractere :");
		scanf(" %s",T);
		printf("entrer le caractere :");
		scanf(" %c",&c);
		n=strlen(T);
		
		 p_occ = (int*)malloc(sizeof(int));
         d_occ = (int*)malloc(sizeof(int));
		
    i=nb_occurrence(T,n,c,p_occ,d_occ);
    printf("p_occ = %d\nd_occ = %d\n",*p_occ+1,*d_occ+1);
     printf("nbre d occurence de %c : %d",c,i);
     free(p_occ);
    free(d_occ);
}