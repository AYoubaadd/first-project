#include <stdio.h>
#include <stdlib.h>

int main() {
    int *T= NULL;
    int n= 0,i,j=0,input,c=1;
     
    printf("Entrer les elements (enter 0 pour arreter):\n");
    while (1){
        printf("Entrer l element %d: ", n+1);
        scanf("%d", &input);
        if (input == 0)break;
            
        T = realloc(T,(n+1) * sizeof(int));
        T[n] = input;
        n++;
    }
    
  
   int  u[n];
   for(i=0;i<n;i++){
      while(T[i]==T[i+1]){c++;i++;}
    u[j]=c;
	u[j+1]=T[i];
	j+=2;
	c=1;
	}
    u[j]='\0';
   
    for(i=0;i<j;i++){
        printf(" %d",u[i]);
    	}
   
   
    free(T);
    return 0;
}