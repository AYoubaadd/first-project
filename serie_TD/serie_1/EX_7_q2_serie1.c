 #include <stdio.h>

int main() {
    int number, evenCount = 0, totalCount = 0;

    printf("Entrez des nombres (100 pour arreter):\n");

    while (1) {
        scanf("%d", &number);

        if (number == 100) break; 

        totalCount++; 
        if (number % 2 == 0) {
            evenCount++;
            printf("Le carre du nombre pair %d est %d\n", number, number * number);
        }
    }

    printf("Nombre total d'entrees: %d\n", totalCount);
    printf("Nombre d'entrees paires: %d\n", evenCount);

    return 0;
}