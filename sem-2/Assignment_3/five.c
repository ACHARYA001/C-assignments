#include <stdio.h>

int hcf(int n, int m)
{
  while(n != m)
  {
    if(n > m)
      n -= m;
    else
      m -= n;
  }
  return n;
}

int lcm(int n, int m, int gcd)
{
  return (n * m) / gcd;
}

int main(void)
{
  int num1, num2;
  printf("Provide two numbers [space separated] : ");
  scanf("%d %d", &num1, &num2);

  int HCF = hcf(num1, num2);

  printf("\nHCF of %d & %d is : %d\n", num1, num2, HCF);
  printf("LCM of %d & %d is : %d\n", num1, num2, lcm(num1, num2, HCF));
  return 0;
}
