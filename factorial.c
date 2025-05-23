#include <stdio.h>

// Ce code permet de lire un nombre entier et calculer son factoriel

int main(int argc, char const *argv[])
{
    int a, factoriel=1;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        factoriel *= i;
    }
    printf("Le factoriel de %d est : %d", a, factoriel);

    return 0;
}
