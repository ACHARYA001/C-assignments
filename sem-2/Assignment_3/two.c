#include <stdio.h>


int isPalindrome(int n)
{
  int number = n;
  int rem = 0, rev = 0;

  while(number != 0)
  {
    rem = number % 10;
    rev = rev * 10 + rem;
    number /= 10;
  }

  if (n == rev)
    return 1;
  else
    return 0;
}

int main(void)
{
  int num;
  printf("Provide the number to check : ");
  scanf("%d", &num);

  if (isPalindrome(num))
    printf("\nThe given number %d is a palindrome\n", num);
  else
    printf("\nThe given number %d is not a palindrome\n", num);
  return 0;
}
