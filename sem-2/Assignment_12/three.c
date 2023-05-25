#include <stdio.h>

#define MAX 50

int main(void) {
  FILE *org_file, *copied_file;
  char file_1[] = "original.dat";
  char file_2[] = "copied.dat";
  char ch, content[MAX];

  printf("Provide the line to insert in the file: ");
  fgets(content, MAX, stdin);

  org_file = fopen(file_1, "w");
  if (org_file == NULL) {
    printf("\nUnable to create or write in the %s.\n", file_1);
    return 1;
  }
  fputs(content, org_file);
  fclose(org_file);

  // duplicating the file data in another file
  org_file = fopen(file_1, "r");
  copied_file = fopen(file_2, "w");
  if (org_file == NULL || copied_file == NULL) {
    printf("\nError in opening the files.\n");
    return 1;
  }

  while ((ch = fgetc(org_file)) != EOF) {
    fputc(ch, copied_file);
  }
  fclose(org_file);
  fclose(copied_file);
  printf("\nFile copied successfully!\n");

  // printing copied data
  copied_file = fopen(file_2, "r");
  if (copied_file == NULL) {
    printf("\nError opening the copied file.\n");
    return 1;
  }

  printf("\nCopied file content:\n");
  while ((ch = fgetc(copied_file)) != EOF) {
    putchar(ch);
  }
  fclose(copied_file);

  return 0;
}

