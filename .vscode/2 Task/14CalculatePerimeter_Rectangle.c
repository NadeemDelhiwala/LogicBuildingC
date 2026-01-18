#include <stdio.h>
int main(int argc, char const *argv[])
{
  /* code */
  float sideA = 0.0f, sideB = 0.0f, sideC = 0.0f, sideD = 0.0f;
  float perimeter_Rectangle = 0.0f;
  printf("Calculate the Perimeter of a Rectangle Operation \n: ");
  printf("Enter first side: ");
  scanf("%f", &sideA);
  printf("Enter second side: ");
  scanf("%f", &sideB);
  printf("Enter third side: ");
  scanf("%f", &sideC);
  printf("Enter fourth side: ");
  scanf("%f", &sideD);
  perimeter_Rectangle = sideA + sideB + sideC + sideD;
  printf("The perimeter stored in variable is: %f\n", perimeter_Rectangle);
  return 0;
}
