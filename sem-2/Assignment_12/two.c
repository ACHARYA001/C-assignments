#include <stdio.h>

#define MAX 50

int main(void)
{
  int count = 0;
  FILE *file;
  char filename[] = "para.dat";
  char ch, content[MAX];
  printf("Provide the line to insert in the file : ");
  fgets(content, sizeof(content), stdin);

  file = fopen(filename, "w");
  if(file == NULL)
  {
    printf("\nUnable to create or write in %s.\n", filename);
    return 1;
  }
  fputs(content, file);
  fclose(file);
  printf("\nFile creation successful!\n");

  // counting number of vowels
  file = fopen(filename, "r");
  if(file == NULL)
  {
    printf("\nError opening the file.\n");
    return 1;
  }
  while((ch = fgetc(file)) != EOF)
  {
    switch(ch)
    {
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
        count++;
        break;
    }
  }
  printf("\nNumber of vowels : %d\n", count);
  return 0;
}
