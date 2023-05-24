#include <stdio.h>

int isperfect(int N)
{
  // a number is perfect number when sum of factors of the given number is equal to the number
  int sum = 0;
  for(int i = 1; i <= N / 2; i++)
  {
    if(N % i == 0)
      sum += i;
  }

  if (sum == N)
    return 1;
  else
    return 0;
}

int main(void)
{
  int n;
  printf("Provide the number to check : ");
  scanf("%d", &n);

  if (isperfect(n))
    printf("\nNumber %d is a perfect number.\n", n);
  else
    printf("\nNumber %d is not a perfect number.\n", n);
  return 0;
}
