#include<stdio.h>
main()
{
  // ce code calcul la somme de deux entiers saisis par l'utilisateur 
  int a,b,sum;
  printf("Entrez le premier nombre:\n");
  scanf("%d%",&a);
  printf("Entrez le deuxième nombre:\n");
  scanf("%d",&b);
  sum = a + b;
  printf("la somme est:%d\n", sum);
  return 0;
}
