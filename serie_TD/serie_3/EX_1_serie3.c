#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char *T;
	int n,i;
	char *d,*f,temp;
	T=(char*)malloc(30*sizeof(char));
	printf("Enter un nom : ");
	scanf(" %s",T);
    
    d=T;
    n=strlen(T);
	f=T+n-1;
   
    f= T+n-1;
    for(i=0;i<n/2;i++){
        temp=*f;
        *f=*d;
        *d=temp;
        f--;
        d++;
	}
printf(" %s ",T);

}