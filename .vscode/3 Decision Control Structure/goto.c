#include <stdio.h>
int main()
{
  int number = 2;
input_number: // label for goto
  printf("Starting the goto example program.\n");
  printf("Please enter the number 1 to jump to the label:\n");
  scanf("%d", &number);
  if (number != 10)
  {
    goto input_number;
  }
  return 0;
}