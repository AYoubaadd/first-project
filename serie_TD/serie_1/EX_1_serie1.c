#include <stdio.h>

int main()
{
    int a, b;
    char c;
    printf("saisie le nombre a : ");
    scanf("%d", &a);
    printf("\nsaisie le nombre b : ");
    scanf("%d", &b);
    printf("\nsaisie l'operateur : ");
    scanf(" %c",&c);
    switch (c)
    {
    case '+':
        printf("\nresultat : %d", a + b);
        break;
    case '-':
        printf("\nresultat : %d", a - b);
        break;
    case '/':
        printf("\nresultat: %f", (float)a / b);
        break;
    case '*':
        printf("\nresultat: %d", (float)a * b);
        break;
    default:
        break;
    }
}
