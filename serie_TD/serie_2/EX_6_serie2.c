#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char cMessage[100] ,c;
	int i,j,a=0,b=0,d=0,e=0;
	printf("Entrez votre text:");
	gets(cMessage);
   
	j=strlen(cMessage);
	for(i=0;i<j;i++){c=cMessage[i];
		
		if ((c>='a' && c<='z')||(c>='A' && c<='Z'))a++;
		else if(c==' ')b++;
		else if(c>='0' && c<='9')d++;
		else e++;
	}
	printf("-caracteres:%d\n",a);
	printf("-espaces:%d\n",b);
	printf("-chifres:%d\n",d);
	printf("-autres:%d\n",e);
}