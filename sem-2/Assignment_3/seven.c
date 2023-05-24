#include <stdio.h>


int isprime(int N)
{
  if (N <= 1)
    return 0;

  for(int i = 2; i * i <= N; i++)
  {
    if (N % i == 0)
      return 0;
  }
  return 1;
}

int main(void)
{
  int n;
  printf("Provide the value of n : ");
  scanf("%d", &n);

  if (n <= 1)
    printf("\nPrime numbers are greater than 1\n");
  else{
    printf("\nPrime numbers are : ");
    for(int i = 2; i <= n; i++)
    {
      if (isprime(i))
        printf("%d ", i);
    }
    printf("\n");
  }
  return 0;
}
