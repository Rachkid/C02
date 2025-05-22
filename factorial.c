# include<stdio.h>
main()
{
  // ce code calcul la factorielle d'un nombre entrer par l'utilisateur 
  int n,i,f
  printf("Donnez un nombre: \n");
  scanf("%d",&n);
  f=1;
  for(i=1; i<=n; i++)
    {
      f=f*i;
    }
  printf("Le factoriel de %d est: %d \n", n,f);
  return 0;
}
