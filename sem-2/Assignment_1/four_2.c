#include <stdio.h>


int main(void)
{
  // swapping without third variable
  float num1, num2;
  printf("Provide the first number [num1]: ");
  scanf("%f", &num1);
  printf("Provide the second number [num2]: ");
  scanf("%f", &num2);

  num1 = num1 - num2;
  num2 = num1 + num2;
  num1 = num2 - num1;

  printf("\nAfter swapping :\n");
  printf("num1 = %.2f and num2 = %.2f\n", num1, num2);
  return 0;
}
