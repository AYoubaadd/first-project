#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *T;
	int n,i,j=0;
	char *d,*f,temp,t[30];
	T=(char*)malloc(30*sizeof(char));
	printf("Enter un nom : ");
	scanf(" %s",T);
	
    
    
    d=T;
    while(*d!='\0'){t[i]=*d;i++;d++;}
d=T;
    n=i;
	f=T+n-1;
   
    f = T + n - 1;
    for(i=0;i<n/2;i++){
        temp = *f;
        *f = *d;
        *d = temp;
        f--;
        d++;
	}printf(" %s ",T);
	
    for(i=0;i<n;i++){
    	if(T[i]==t[i])j++;
	}
         if(j==n)printf("le mot %s est palaindrom ",t);
         else printf("le mot %s n est pas palaindrom ",t);
}