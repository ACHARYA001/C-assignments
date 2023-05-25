#include <stdio.h>
#include <stdlib.h>


void arr_copy(int *org_arr, int *copied_arr, int N)
{
  for(int i = 0; i < N; i++)
  {
    *(copied_arr + i) = *(org_arr + i);
  }
}

int main(void)
{
  int n;
  printf("Provide the length of integer array : ");
  scanf("%d", &n);

  int *arr_1 = (int *) calloc(n, sizeof(int));
  int *arr_2 = (int *) calloc(n, sizeof(int));
  printf("Provide data in integer array of length %d : ", n);
  for(int i = 0; i < n; i++)
  {
    scanf("%d", arr_1+i);
  }

  arr_copy(arr_1, arr_2, n);
  printf("\nAfter coping data inside copied array : \n");
  for(int j = 0; j < n; j++)
    printf("%d ", *(arr_2+j));
  printf("\n");
  return 0;
}
