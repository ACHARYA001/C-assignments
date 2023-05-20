#include <stdio.h>


int main(void)
{
  int n, sum = 0;
  printf("Provide the value of n : ");
  scanf("%d", &n);

  printf("\nNatural numbers from 1 to %d are : ", n);
  for(int i = 1; i <= n; i++)
  {
    printf("%d ", i);
    sum += i;
  }
  printf("\nSum of all n Natural numbers is : %d\n", sum);
  return 0;
}
