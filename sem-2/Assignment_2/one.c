#include <stdio.h>


int main(void)
{
  char alphabet;
  printf("Provide the alphabet to evaluate : ");
  scanf("%c", &alphabet);

  switch (alphabet) {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
      printf("\nThe alphabet %c is vowel!\n", alphabet);
      break;
    default:
      printf("\nThe alphabet %c is consonent!\n", alphabet);
      break;

  }
  return 0;
}
