#include<stdio.h>
#include<stdlib.h>

void sans_espace(char T[],char t[]);

int main(){
	char T[200],t[200];
	sans_espace(T,t);

}

void sans_espace(char T[],char t[]){
		int i=0,c=0,j;
	printf("entrer un text :\n");
	gets(T);
	printf("votre text :\n%s\n",T);
	while(T[i]==' '){
		c++;i++;}
		

	for(i=0;T[i]!='\0';i++){
		if(T[c+i]==' '&&T[c+i+1]==' '){j=i;while(T[j+c]==' '){c++;j++;}	}
	
	                                                   	
	t[i]=T[c+i];
	}
	t[i]='\0';
	printf("votre text sans espace suplemantaire :\n%s",t);
}