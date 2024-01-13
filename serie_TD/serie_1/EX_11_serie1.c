#include<stdio.h>
#include<stdlib.h>

int main()
{int i, N=0;
  
  printf("La valeur initiale de l'entier est : %d\n",N);
  
   d: printf("Le menu :\n 1.Ajouter 2\n2.Multilier par 3\n3.Soustraire 5\n4.Quitter \n");
  scanf("%d",&i);
  if(i==1){N=N+2;printf("La valeur de l'entier apres l ajout de 2 : %d \n",N);goto d;}
  if(i==2){N=N*3;printf("La valeur de l'entier apres la multiplication par 3 : %d \n",N);goto d;}
  if(i==3){N=N-5;printf("La valeur de l'entier apres soustraire 5 : %d \n",N);goto d;}
  if(i==4){printf("vous avez quitter le programme ! \n");}

}