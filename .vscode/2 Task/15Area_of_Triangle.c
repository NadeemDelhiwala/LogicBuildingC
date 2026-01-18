#include <stdio.h>
int main(int argc, char const *argv[])
{
  /* code */
  float length = 0.0f, breadth = 0.0f;
  float Area_Triangle = 0.0f;
  printf("Calculate the Area of a Triangle Operation \n: ");
  printf("Enter length side: ");
  scanf("%f", &length);
  printf("Enter breadth side: ");
  scanf("%f", &breadth);
  if (length <= 0 || breadth <= 0)
  {
    printf("Length and Breadth must be positive numbers.\n");
    return 1;
  }
  Area_Triangle = 0.5f * length * breadth;
  printf("The area stored in variable is: %f\n", Area_Triangle);
  return 0;
}
