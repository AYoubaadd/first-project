#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void crypt(char *T,int n){
	int i,j;
	char c;
	j=strlen(T);
	for(i=0;i<j;i++){
		c=T[i];
		if ((c>='a' && c<='z')||(c>='A' && c<='Z'))T[i]=c+n;
	}
	  
}

int main(){
    char cMessage[] = "abcDE";
	int n;
	printf("choisit un decodage:");
	scanf("%d",&n);
	
    crypt(cMessage,n);
    printf("\nle message crypter:%s",cMessage);
}