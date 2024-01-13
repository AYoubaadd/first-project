#include<stdio.h>
#include<stdlib.h>
int iNb_jour[13];
void initialisation(){
	int i;
	for(i=1;i<13;i++)
    if(i==2)iNb_jour[2]=28;
    else if((i%2==0)&&(i<=7)||(i%2!=0)&&(i>7))iNb_jour[i]=30;
    else iNb_jour[i]=31;
   
}
 void impression(){int m;
 		printf("donner le mois  : \n");
 		scanf("%d",&m);
 			printf("le nbre de jour de mois %d est  :%d \n",m,iNb_jour[m]);
 }

int main()
{ 

 initialisation();
impression();

}
