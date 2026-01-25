#include <stdio.h>
int main()
{
  int number;
  printf("Enter an integer: ");
  scanf("%d", &number);
  // printf("The number is %s.\n", (number % 2 == 0) ? "even" : "odd");
  number % 2 == 0 ? printf("The number is even.\n") : printf("The number is odd.\n");
  return 0;
}
