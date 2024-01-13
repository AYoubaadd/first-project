#include <stdio.h>
#include <stdlib.h>


int main() {
    int nomber, nbt=0,som=0, min,minp, nbrp=0;

    printf("Entrez la serie des nbres (100 pour arreter):\n");
    scanf("%d", &nomber);
    if (nomber == 900) break;
    min=nomber;
    
    while (1) {
        scanf("%d", &nomber);
        if (nomber == 900) break; 
        nbt++;
        som+=nomber;
        if(nomber>0) {  minp=nomber;
		     nbrp+=nomber;
		     if(nomber<minp)
		}
        if(nomber<min)min=nomber ;
       
        
        
        
    }

    printf("Nombre total d'entrees: %d\n", totalCount);
    printf("Nombre d'entrees paires: %d\n", evenCount);

}