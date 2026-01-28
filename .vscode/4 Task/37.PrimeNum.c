#include <stdio.h>
#include <math.h>
int main()
{
  int num;
  printf("Welcome to Prime Number Calculator \n ");
  printf("Enter first number: ");
  scanf("%d", &num);
  for (int i = 2; i < num; i++)
  {

    /* PrimeNo start from 2 .Prime No is a number which is divisible only by 1 and itself */
    if (num % i == 0)
    {
      printf("%d is not a prime number ", num);
      return 0;
      // break; // we can also use break here
    }
  }
  printf("%d is a prime number \n", num);
  return 0;
}