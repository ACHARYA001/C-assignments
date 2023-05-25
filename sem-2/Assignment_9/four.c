#include <stdio.h>
#include <stdlib.h>


void reverse(int *arr, int N)
{
  int temp;
  for(int i = 0; i < N/2; i++) // starting and ending elements of array are swapped at every iteration
  {
    temp = *(arr + i);
    *(arr + i) = *(arr + N - i - 1);
    *(arr + N - i - 1) = temp;
  }
}

int main(void)
{
  int n;
  printf("Provide the length of the array : ");
  scanf("%d", &n);

  int *arr = (int *) calloc(n, sizeof(int));
  printf("Provide integer data inside the array : ");
  for(int i = 0; i < n; i++)
    scanf("%d", arr+i);

  reverse(arr, n);
  printf("\nAfter reversing the array data is : ");
  for(int i = 0; i < n; i++)
    printf("%d ", *(arr + i));
  printf("\n");

  return 0;
}
