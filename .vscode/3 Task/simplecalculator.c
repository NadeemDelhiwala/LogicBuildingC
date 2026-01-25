#include <stdio.h>
int main()
{
  int choice, number1, number2, sum, difference, product, division, modulus;
  printf("Simple Calculator Program\n");
  printf("Enter your choice : ");
  printf("1. Addition, 2. Subtraction, 3. Multiplication, 4. Division and 5. Modulus of two numbers\n");
  scanf("%d", &choice);
  printf("Enter first number: ");
  scanf("%d", &number1);
  printf("Enter second number: ");
  scanf("%d", &number2);
  switch (choice)
  {
  case 1:
    /* Choice 1 Addition */
    printf("You have chosen Addition.\n");
    sum = number1 + number2;
    printf("Sum: %d\n", sum);
    break;
  /* Choice 2 Subtraction */
  case 2:
    printf("You have chosen Subtraction.\n");
    difference = number1 - number2;
    printf("Difference: %d\n", difference);
    break;
  /* Choice 3 Multiplication */
  case 3:
    printf("You have chosen Multiplication.\n");
    product = number1 * number2;
    printf("Product: %d\n", product);
    break;

  case 4:
    /* Choice 4 Division */
    printf("You have chosen Division.\n");
    if (number2 == 0)
    {
      printf("Error: Division by zero is not allowed.\n");
      break;
    }
    else
    {
      division = number1 / number2;
      printf("Division: %d\n", division);
    }
    break;

  case 5:
    /* Choice 5 Modulus */
    printf("You have chosen Modulus.\n");
    if (number2 == 0)
    {
      printf("Error: Division by zero is not allowed.\n");
      break;
    }
    else
    {
      modulus = number1 % number2;
      printf("Modulus: %d\n", modulus);
    }
    break;
  default:
    printf("Invalid choice! Please select a valid operation.\n");
    break;
  }
  printf("Thank you for using the simple calculator program.\n");
  printf("Exiting the program.\n");
  return 0;
}