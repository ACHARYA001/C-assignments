#include <stdio.h>
#include <math.h>


void findRoot(int a, int b, int c)
{
  float root1, root2;
  printf("\nWhen a = %d, b = %d, c = %d\n", a, b, c);
  int disc = pow(b, 2) - 4 * a * c;
  if (disc > 0)
  {
    root1 = (-b + sqrt(disc)) / (2 * a);
    root2 = (-b - sqrt(disc)) / (2 * a);
    printf("root 1 = %.2f and root 2 = %.2f\n", root1, root2);
  } else if (disc == 0){
    root1 = root2 = -(float)b / (2 * a);
    printf("root 1 = %.2f and root 2 = %.2f\n", root1, root2);
  } else{
    float real = -(float)b / (2 * a);
    float img = sqrt(-disc) / (2 * a);
    printf("root 1 = %.2f + %.2f * i and root 2 = %.2f - %.2f * i\n", real, img, real, img);
  }
}

int main(void)
{
  int a, b, c;
  printf("Provide the values of a, b & c [space separated]: ");
  scanf("%d %d %d", &a, &b, &c);
  // for all combo of a, b, c
  findRoot(a, b, c);
  findRoot(a, c, b);
  findRoot(b, c, a);
  findRoot(c, a, b);
  return 0;
}
