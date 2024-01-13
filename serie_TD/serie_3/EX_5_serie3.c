#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    char T[200], t[10], v[10];
    char *i,*m;
    int j = 0, l = 0, c = 1;

    printf("Saisir une phrase :\n");
    gets(T);

    i= T;
    while (*i!= '\0') {
        
        while (*i!=' '&& *i!='\0'){
            t[j]=*i;
            j++;
            i++;
        }
        t[j]='\0';  
        m=i++;
        do{
        while(*i!=' '&&*i!='\0'){
            v[l]=*i;
            l++;
            i++;
        }
        v[l]='\0';
        if (strcmp(t,v)==0) 
            c++;l=0;
        i++;printf("La frequence du mot %s est %d\n", v, c);c = 1;}while(*i!= '\0');
        if (*i != '\0')
            i=m;
        j=0;
    }
}
