#include<stdio.h>
#include<stdlib.h>
int main()
{int a,i,m=0,n=0,s=0;
   float moy;
   printf("saisir des notes entre 0 et 20 !! \n Toute valeur en dehors empechrait la sisie\n");
    printf("combien de note tu vas saisir:\n");
    scanf("%d",&a);
    int tab[a];
   for(i=0;i<a;i++){
   	 printf("entrer la note N%d: \n",i+1);
   	 scanf("%d",&tab[i]);
   	 if(tab[i]==0|| tab[i]<0||tab[i]>20){
		printf("erreur \n");return 0;}
   }
   
    for(i=0;i<a;i++){
     s+=tab[i];
   }
   moy=s/a;
   printf("la moyenne est: %.2f \nle total est : %d \n",moy,s);
   
   int max=tab[0] , min=tab[0];
   
   for(i=1;i<a;i++){
   
   	 if(tab[i]>max){
		 max=tab[i];m=i;}
   	  if(tab[i]<min){
		  min=tab[i];n=i;}
    }
   
printf("la note la plus basse est : %d leur position est: %d \n",min,n+1);
   
  printf("la note la plus haute est : %d leur position est: %d \n",max,m+1);
}