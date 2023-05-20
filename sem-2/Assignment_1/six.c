#include <stdio.h>


int main(void)
{
  int num;
  printf("Provide the number to find even or odd : ");
  scanf("%d", &num);

  printf("\nAfter checking the number : \n");
  if (num % 2 == 0)
  {
    printf("%d is an even number\n", num);
  }
  else{
    printf("%d is an odd number\n", num);
  }
  return 0;
}
