#include <stdio.h>
int main(int argc, char const *argv[])
{
  /* code : Sum of Two Numbers */
  int num1, num2, sum = 0;
  printf("Welcome to Sum Calculator \n ");
  // Prompt the user to enter two numbers

  printf("Enter first number : ");
  scanf("%d", &num1);

  printf("Enter second number : ");
  scanf("%d", &num2);

  // Calculate the sum of two numbers
  sum = num1 + num2;

  // Display the results

  printf("The sum of %d and %d is %d \n", num1, num2, sum);
  return 0;
}
