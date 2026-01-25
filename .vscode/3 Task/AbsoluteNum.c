#include <stdio.h>
int main()
{
  int number;
  printf("Enter an integer for find Absolute value: ");
  scanf("%d", &number);
  printf("The number is %d.\n", number);
  printf("The Absolute number is %d.\n", (number > 0) ? number : -number);
  return 0;
}
