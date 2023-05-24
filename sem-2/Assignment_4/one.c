#include <stdio.h>


int main(void)
{
  int n;
  printf("Provide the n-th row number : ");
  scanf("%d", &n);

  printf("\nGraph of %d rows : \n", n);
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
