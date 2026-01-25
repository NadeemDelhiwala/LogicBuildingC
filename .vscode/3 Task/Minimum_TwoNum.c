#include <stdio.h>
int main()
{
  int num1 = 0, num2 = 0;
  printf("Enter an num1: ");
  scanf("%d", &num1);
  printf("Enter an num2: ");
  scanf("%d", &num2);
  printf("Entered numbers are %d, %d \n", num1, num2);
  printf("The minimum number : %d\n", (num1 < num2) ? num1 : num2);
  printf("Thank you for using the minimum number finder program.\n");
  return 0;
}
