#include <stdio.h>
#include <math.h>


int isarmstrong(int N)
{
  int org, rem, result = 0, n = 0;
  org = N;

  while(org != 0)
  {
    org /= 10;
    ++n;
  }
  org = N;

  while(org != 0)
  {
    rem = org % 10;
    result += pow(rem, n);
    org /= 10;
  }

  if (result == N)
    return 1;
  else
    return 0;
}

int main(void)
{
  int num;
  printf("Enter the number here : ");
  scanf("%d", &num);

  if (isarmstrong(num))
  {
    printf("\nThe number %d is an armstrong number.\n", num);
  } else{
    printf("\nThe number %d is not an armstrong number.\n", num);
  }
  return 0;
}
