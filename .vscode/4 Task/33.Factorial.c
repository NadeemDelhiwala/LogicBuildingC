#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Factorial Generator \n ");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Factorial of %d:\n", num);
  int i = 1;
  int factorial_res = 1;
  while (i <= num)
  {
    /* code */
    factorial_res *= i;
    i++;
  }

  printf("Factorial of %d is %d\n", num, factorial_res);
  return 0;
}