#include <stdio.h>


void swap(int *A, int *B)
{
  *A = *A - *B;
  *B = *A + *B;
  *A = *B - *A;
}

int main(void)
{
  int n1, n2;
  printf("Provide two integers to swap [n1 & n2] : ");
  scanf("%d %d", &n1, &n2);

  swap(&n1, &n2);
  printf("\nAfter swapping n1 & n2 : %d & %d\n", n1, n2);
  return 0;
}
