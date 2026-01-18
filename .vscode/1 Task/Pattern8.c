#include <stdio.h>
#define PI 3.14159f
int main()
{
  float radius = 0.0f;
  float area_circle = 0.0f;
  printf("--Area of Circle ---\n");
  printf("Enter radius : ");
  scanf("%f", &radius);
  area_circle = PI * radius * radius;
  printf("Area of Circle = %f\n", area_circle);

  return 0;
}