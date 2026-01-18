#include <stdio.h>
int main(int argc, char const *argv[])
{
  /* code */
  float num1 = 0.0f, num2 = 0.0f;
  float product = 0.0f;
  printf("Calculate the Product of two Floating Point Numbers Operation \n: ");
  printf("Enter first number: ");
  scanf("%f", &num1);
  printf("Enter second number: ");
  scanf("%f", &num2);
  product = num1 * num2;
  printf("The product stored in variable is: %f\n", product);
  return 0;
}
