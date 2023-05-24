#include <stdio.h>


int main(void)
{
  // using two consecutive for loop to separate input and summation process
  int n, i, sum = 0;
  printf("Provide the length of the array : ");
  scanf("%d", &n);

  int arr[n];
  for(i = 0; i < n; i++)
  {
    scanf("%d", arr+i);
  }

  printf("\nSum of all %d elements in the array : ", n);
  for(i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  printf("%d\n", sum);
  return 0;
}
