#include <stdio.h>


int main(void)
{
  // using ternary operator
  int num1, num2, num3, max;
  printf("Provide three numbers to compare [space separated]: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  max = (num1 > num2 && num1 > num3) ? num1 : ((num2 > num3) ? num2 : num3);
  printf("\nThe maximum between given three numbers is : %d\n", max);
  return 0;
}
