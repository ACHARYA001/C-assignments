#include <stdio.h>

int main(void)
{
  int a, b, sum;
  printf("Provide the numbers here [space separated] : ");
  scanf("%d %d", &a, &b);
  sum = a + b;
  printf("The sum of %d and %d is : %d\n", a, b, sum);
  return 0;
}
