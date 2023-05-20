#include <stdio.h>


int main(void)
{
  int num;
  printf("Provide the number to evaluate : ");
  scanf("%d", &num);

  switch (num > 0) {
    case 1:
      printf("\nThe number %d is positive!\n", num);
      break;
    case 0:
      switch (num == 0) {
        case 1:
          printf("\nThe number is zero!\n");
          break;
        case 0:
          printf("\nThe number %d is negetive!\n", num);
          break;
      } 
  }
  return 0;
}
