#include <stdio.h>

// Ce code permet de lire un entier et indiquer s’il est pair ou impair

int main()
{
    int a;

    scanf("%d", &a);

    if (a % 2 == 0){
        printf("%d est pair.\n", a);
    }
    else{
        printf("%d est impair.\n", a);
    }
    return 0;
}
