#include <stdio.h>
int main()
{
  int number1, number2, result;
  char choice;
  printf("Simple Calculator Program\n");
  printf("Enter your choice : ");
  printf("+. Addition, -. Subtraction, *. Multiplication, /. Division and %. Modulus of two numbers\n");
  scanf("%c", &choice);
  printf("Enter first number: ");
  scanf("%d", &number1);
  printf("Enter second number: ");
  scanf("%d", &number2);
  switch (choice)
  {
  case '+':
    /* Choice 1 Addition */
    printf("You have chosen Addition.\n");
    result = number1 + number2;
    printf("Sum: %d\n", result);
    break;
  /* Choice 2 Subtraction */
  case '-':
    printf("You have chosen Subtraction.\n");
    result = number1 - number2;
    printf("Difference: %d\n", result);
    break;
  /* Choice 3 Multiplication */
  case '*':
    printf("You have chosen Multiplication.\n");
    result = number1 * number2;
    printf("Product: %d\n", result);
    break;

  case '/':
    /* Choice 4 Division */
    printf("You have chosen Division.\n");
    if (number2 == 0)
    {
      printf("Error: Division by zero is not allowed.\n");
      break;
    }
    else
    {
      result = number1 / number2;
      printf("Division: %d\n", result);
    }
    break;

  case '%':
    /* Choice 5 Modulus */
    printf("You have chosen Modulus.\n");
    if (number2 == 0)
    {
      printf("Error: Division by zero is not allowed.\n");
      break;
    }
    else
    {
      result = number1 % number2;
      printf("Modulus: %d\n", result);
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