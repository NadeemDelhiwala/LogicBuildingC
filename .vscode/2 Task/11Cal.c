#include <stdio.h>
int main(int argc, char const *argv[])
{
  /* code */
  int num1 = 0, num2 = 0;
  printf("Calculator Program Arthimetic Operation \n: ");
  printf("Enter one numbers: ");
  scanf("%d", &num1);
  printf("Enter another numbers: ");
  scanf("%d", &num2);
  printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
  printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
  printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
  if (num2 != 0)
  {
    printf("Division: %d / %d = %f\n", num1, num2, (float)num1 / num2);
    printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);
  }
  else
  {
    printf("Division and Modulus by zero is not allowed.\n");
  }
  return 0;
}
