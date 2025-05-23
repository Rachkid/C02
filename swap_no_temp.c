#include <stdio.h>

// Ce code permet de lire deux nombres et les inverser sans utiliser de variable temporaire

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  a = a + b;
  b = a - b;
  a = a - b;
  printf("Après échange : a = %d, b = %d", a, b);
  return 0;
}
