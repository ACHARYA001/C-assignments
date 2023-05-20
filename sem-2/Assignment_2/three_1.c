#include <stdio.h>


int main(void)
{
  // solution with if-else
  int x, n, y;
  printf("Provide the value of x & n [space separated] : ");
  scanf("%d %d", &x, &n);

  if (n == 3)
    y = 1 + 2 * x;
  else if (n == 2)
    y = 1 + x / n;
  else if (n == 1)
    y = 1 + x * x;
  else
    y = 1 + n * x;

  printf("\nThe value of Y(x, n) : %d\n", y);
  return 0;
}
