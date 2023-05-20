#include <stdio.h>


int main(void)
{
  float num1, num2;
  float sum, sub, div, mul;
  int mod;
  printf("Provide the numbers to perform all arithmatic operation [space separated] : ");
  scanf("%f %f", &num1, &num2);

  printf("\nAfter performing all arithmatic operation : \n");
  // Addition
  sum = num1 + num2;
  printf("%.2f + %.2f = %.2f\n", num1, num2, sum);

  // Subtraction
  sub = num1 - num2;
  printf("%.2f - %.2f = %.2f\n", num1, num2, sub);

  // Multiplication
  mul = num1 * num2;
  printf("%.2f * %.2f = %.2f\n", num1, num2, mul);

  // Division
  if (num2 != 0)
  {
    div = num1 / num2;
    printf("%.2f / %.2f = %.2f\n", num1, num2, div);
  }
  else {
    printf("Zero Division Not Allowed!\n");
  }

  // Modulo
  if (num2 != 0)
  {
    mod = (int)num1 % (int)num2;
    printf("%d %% %d = %d\n", (int)num1, (int)num2, mod);
  }
  return 0;
}
