#include <stdio.h>


int main(void)
{
  float num1, num2, num3;
  printf("Provide the three numbers to find max [space separated] : ");
  scanf("%f %f %f", &num1, &num2, &num3);

  printf("\nAfter checking the numbers : \n");
  if (num1 > num2)
  {
    if (num1 > num3)
    {
      printf("%.2f is the maximum number.\n", num1);
    }
    else
    {
      printf("%.2f is the maximum number.\n", num3);
    }
  }
  else if (num2 > num3){
    printf("%.2f is the maximum number.\n", num2);
  }
  else{
    printf("%.2f is the maximum number.\n", num3);
  }
  return 0;
}
