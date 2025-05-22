#include<stdio.h>
main()
{
  //ce code teste un nombre en entrée et vérifie si le nombre est pair ou impair
  int a;
  printf("Donnez un entier :");
  scanf("%d",&a);
  if (a%2==0)
  {
    printf("%d est pair", a);
  }
  else
  {
    printf("%d est impair", a);
  }
  return 0;
}
