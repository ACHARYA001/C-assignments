#include <stdio.h>


int main(void)
{
  // using logical oparator
  int num1, num2, num3, max;
  printf("Enter three numbers here to get the max [space separated]: ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num2 && num1 > num3)
    max = num1;
  else if (num2 > num3)
    max = num2;
  else
    max = num3;

  printf("\nThe maximum between three given numbers is : %d\n", max);
  return 0;
}
