#include <stdio.h>


int main(void)
{
  int x, n, y;
  printf("Provide the values of x & n [space separated] : ");
  scanf("%d %d", &x, &n);
  switch (n) {
    case 3:
      y = 1 + 2 * x;
      break;
    case 2:
      y = 1 + x / n;
      break;
    case 1:
      y = 1 + x * x;
      break;
    default:
      y = 1 + x * n;
      break;

  }
  printf("\nThe value of Y(x,n) : %d\n", y);
  return 0;
}
