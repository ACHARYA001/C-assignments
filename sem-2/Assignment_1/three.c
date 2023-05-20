#include <stdio.h>
#include <math.h>


int main(void)
{
  double length, breadth, radius;
  double rectangle_perimeter, rectangle_area;
  double circle_circumference, circle_area;
  double pi = M_PI; // M_PI is the constant for pi provided by math.h
  printf("Provide the length & breadth of a rectangle [space separated] : ");
  scanf("%lf %lf", &length, &breadth);
  printf("Provide the radius of the circle : ");
  scanf("%lf", &radius);

  // calculations for rectangle
  rectangle_perimeter = 2 * (length + breadth);
  rectangle_area = length * breadth;

  // calculations for circle
  circle_circumference = 2 * pi * radius;
  circle_area = pi * pow(radius, 2);

  // Output
  printf("\nPerimeter of the rectangle : %.2lf\n", rectangle_perimeter);
  printf("Area of the rectangle : %.2lf\n", rectangle_area);
  printf("Circumference of the circle : %.2lf\n", circle_circumference);
  printf("Area of the circle: %.2lf\n", circle_area);

  return 0;
}
