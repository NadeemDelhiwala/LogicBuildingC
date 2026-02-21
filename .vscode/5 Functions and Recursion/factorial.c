#include <stdio.h>
int factorial_using_Loop(int);
int factorial_using_Recursion(int);
int main(int argc, char const *argv[])
{
  /* code */
  int num;
  printf("Enter a number to find its factorial: ");
  scanf("%d", &num);
  int res_using_Loop = factorial_using_Loop(num);
  int res_using_Recursion = factorial_using_Recursion(num);
  printf("The factorial of %d using Loop is: %d\n", num, res_using_Loop);
  printf("The factorial of %d using Recursion is: %d\n", num, res_using_Recursion);
  return 0;
}
int factorial_using_Loop(int n)
{
  int result = 1;
  for (int i = 1; i <= n; i++)
  {
    result *= i;
  }
  return result;
}
int factorial_using_Recursion(int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return n * factorial_using_Recursion(n - 1);
}