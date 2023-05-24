#include <stdio.h>


int factorial(int N)
{
  if(N == 0)
    return 1;

  return N * factorial(N - 1);
}

int isStrong(int num)
{
  // a number is strong number when sum of factorial of individual digits equals to the number
  int org, dig, sum = 0;
  org = num;
  while(num != 0)
  {
    dig = num % 10;
    sum += factorial(dig);
    num /= 10;
  }

  if(sum == org)
    return 1;
  else
    return 0;
}

int main(void)
{
  int n;
  printf("Provide the number here : ");
  scanf("%d", &n);

  if (isStrong(n))
    printf("\nGiven number %d is a strong number.\n", n);
  else
    printf("\nGiven number %d is not a strong number.\n", n);
  return 0;
}
