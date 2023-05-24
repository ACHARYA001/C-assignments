#include <stdio.h>


int main(void)
{
  int i, j, k, n;
  printf("Provide the n-th row number : ");
  scanf("%d", &n);

  printf("\nGraph of %d rows :\n", n);
  for(i = 1; i <= n; i++)
  {
    k = i;
    for(j = 0; j < n; j++)
    {
      if(j >= (n-i))
      {
        printf("%d", k);
        k += 1;
      }
      else {
        printf(" ");
      }
      printf(" ");
    }
    printf("\n");
  }
  return 0;
}
