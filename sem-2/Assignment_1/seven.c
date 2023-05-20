#include <stdio.h>


int main(void)
{
  int year;
  printf("Provide the year to check : ");
  scanf("%d", &year);

  printf("\nAfter checking the year :\n");
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
  {
    printf("%d is a leap year.\n", year);
  }
  else {
    printf("%d is not a leap year.\n", year);
  }
  return 0;
}
