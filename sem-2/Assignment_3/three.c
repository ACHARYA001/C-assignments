#include <stdio.h>


void findfactors(int n)
{
  printf("\nFactors of %d: ", n);

  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
      printf("%d ", i);
  }
  printf("\n");
}

int main(void)
{
  int num;
  printf("Provide the number to find all factors : ");
  scanf("%d", &num);

  findfactors(num);
  return 0;
}
