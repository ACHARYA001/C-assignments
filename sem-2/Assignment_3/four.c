#include <stdio.h>


// using long long to handle large values
unsigned long long factorial(int n)
{
  unsigned long long result = 1;

  for (int i = 1; i <= n; i++)
  {
    result *= i;
  }
  return result;
}

int main(void)
{
  int num;
  printf("Provide a positive integer to find factorial : ");
  scanf("%d", &num);

  if (num >= 0)
    printf("\nFactorial of %d is : %llu\n", num, factorial(num));
  else
    printf("\nFactorial is not defined for negetive numbers.\n");
  return 0;
}
