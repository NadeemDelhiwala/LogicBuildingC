#include <stdio.h>
#define PI 3.14159
int main()
{
  float radius = 0;
  float cirumference_circle = 0.0f;
  printf("--Circumference Circle ---\n");
  printf("Enter radius : ");
  scanf("%f", &radius);
  cirumference_circle = 2 * PI * radius;
  printf("Circumference of Circle = %f\n", cirumference_circle);

  return 0;
}