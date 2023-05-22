#include <stdio.h>


int main(void)
{
  int i, j, k, n;
  printf("Provide the n-th number of row : ");
  scanf("%d", &n);

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
