#include <stdio.h>


int findBigger(int *M, int *N)
{
  if(*M > *N)
    return 1;
  else if (*M < *N)
      return 0;
  else
    return -1;
}

int main(void)
{
  int n1, n2, result;
  printf("Provide the the numbers [n1 & n2] : ");
  scanf("%d %d", &n1, &n2);


  result = findBigger(&n1, &n2);
  if(result == 1)
    printf("\nThe bigger value is : %d\n", n1);
  else if(result == 0)
    printf("\nThe bigger value is : %d\n", n2);
  else
    printf("\nBoth values are same.\n");

  return 0;
}
