#include <stdio.h>


int main(void)
{
  // swap using third variable
  float num1, num2, swapper;
  printf("Provide the first number [num1] : ");
  scanf("%f", &num1);
  printf("Provide the second number [num2] : ");
  scanf("%f", &num2);
  swapper = num2;
  num2 = num1;
  num1 = swapper;
  printf("\nAfter swapping :\n");
  printf("num1 = %.2f and num2 = %.2f\n", num1, num2);
  return 0;
}
