#include <stdio.h>

#define MAX_SIZE 50


int main(void)
{
  FILE *newfile;
  char filename[] = "sample.txt";
  char content[MAX_SIZE];
  printf("Provide the first line of the file : ");
  fgets(content, sizeof(content), stdin);

  newfile = fopen(filename, "w");
  if(newfile == NULL)
  {
    printf("\nunable to create or write in the %s.\n", filename);
    return 1;
  }

  fputs(content, newfile);
  fclose(newfile);
  printf("\nFile creation successful!\n");

  // Reading from file
  newfile = fopen(filename, "r");
  if(newfile == NULL)
  {
    printf("\nError opening the file.\n");
    return 1;
  }
  printf("File content : \n");
  char ch;
  while((ch = fgetc(newfile)) != EOF)
    putchar(ch);
  fclose(newfile);

  // Appending to the file
  char append[MAX_SIZE];
  printf("Provide the new line to insert : ");
  fgets(append, sizeof(append), stdin);

  newfile = fopen(filename, "a");
  if (newfile == NULL)
  {
    printf("\nError opening the file.\n");
    return 1;
  }
  fputs(append, newfile);
  fclose(newfile);
  printf("File appended successfully!\n");

  // Reading the file after Appending
  newfile = fopen(filename, "r");
  if(newfile == NULL)
  {
    printf("\nError opening the file.\n");
    return 1;
  }
  printf("updated file content : \n");
  while((ch = fgetc(newfile)) != EOF)
    putchar(ch);
  fclose(newfile);

  return 0;

}
