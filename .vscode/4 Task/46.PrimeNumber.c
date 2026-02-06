#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Prime Number Checker .. \n");
  printf("Please enter a number to check if it is prime : ");
  scanf("%d", &num);
  int i = 2;
  while (i < num)
  {

    /* Prime Number : 2 and num-1 it should not get divided by another num */

    if (num % i == 0) // if it is divisible by any number other than 1 and itself
    {
      printf("The number %d is Not a Prime Number", num);
      return 0;
    }
    i++;
  }
  printf("The number %d is a Prime Number", num);
}