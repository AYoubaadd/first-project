#include<stdio.h>
#include<stdlib.h>

void saisie(int T[],int *N){
    int i;
    do{
    printf("donner le nombre d'elements du tableau (<= 20): ");
        scanf("%d",N);
    } while(*N>20);

    for(i =0;i<*N;i++){
        printf("\nT[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
}

void affichage(int T[],int N){
    int i;
    printf("Les elements du tableau : \n");
    for(i=0;i<N;i++){
        printf("  T[%d]= %d ",i+1,T[i]);
    }
    printf("\n");
}

void Moyenne(int T[],int N){
    int i,S=0;
    for(i=0;i<N;i++){
        S+=T[i];
    }
    printf("La moyenne est : %.2f\n", (float)S/N);
}

void Max_elm(int T[],int N,int *max){
    int i,pos=0;
    *max=T[0];
    for(i=1;i<N;i++){
        if(T[i]>*max){
            *max=T[i];
            pos=i;
        }
    }
    printf("La position du maximum est : %d \n",pos+1);
}

void suprimer(int T[],int *N,int *max){
    int i,j=0;
    for(i=0;i<*N;i++){
        if(T[i]==*max){
            i++;
        } else {
            T[j] = T[i];
            j++;
        }
    }
    (*N)--;
}

void Min_elm(int T[], int N, int *min) {
    int i, pos = 0;
    *min = T[0];
    for (i = 1; i < N; i++) {
        if (T[i] < *min) {
            *min = T[i];
            pos = i;
        }
    }
    printf("La position du minimum est : %d \n", pos + 1);
}

void suprimermin(int T[],int *N,int *min) {
    int i,j=0;
    for (i=0;i<*N;i++){
        if (T[i]== *min) {
            i++;
        } else{
            T[j] =T[i];
            j++;
        }
    }
    (*N)--;
}

void ajout(int T[],int *N) {
    int n, x;
    printf("Donner la valeur que vous voulez insérer et sa position : ");
    scanf("%d %d", &x, &n);
    if(n>=1 && n<=*N+1) {
        for (int i=*N;i>=n;i--) {
            T[i]=T[i-1];
        }
        T[n-1]=x;
        (*N)++;
    } else {
        printf("La position doit être entre 1 et %d\n", *N + 1);
    }
}
int main() {
    int T[20],N=0;
    char l;
    int max,min;
    do {
        printf("Voici le menu : \nA. Saisie et affichage\nB. Moyenne\nC. Suppression du max et affichage\nD. Suppression du min et affichage\nE. Ajout d'un entier à une position donnée\nQ. Quitter\n");
        scanf(" %c", &l);
        switch (l) {
            case 'A':
                saisie(T, &N);
                affichage(T, N);
                break;
            case 'B':
                Moyenne(T, N);
                break;
            case 'C':
                Max_elm(T, N, &max);
                suprimer(T, &N, &max);
                affichage(T, N);
                break;
            case 'D':
                Min_elm(T, N, &min);
                suprimermin(T, &N, &min);
                affichage(T, N);
                break;
            case 'E':
                ajout(T, &N);
                affichage(T, N);
                break;
            case 'Q':
                printf("Vous avez quitte le programme.\n");
                break;
            default:
                printf("Erreur !! Voici le menu :\n");
                break;
        }
    }while(l!='Q');

    return 0;
}
