#include <stdio.h>
int main()
{
  int num1 = 0, num2 = 0, num3 = 0;
  printf("Enter an num1: ");
  scanf("%d", &num1);
  printf("Enter an num2: ");
  scanf("%d", &num2);
  printf("Enter an num3: ");
  scanf("%d", &num3);
  printf("Entered numbers are %d, %d, %d\n", num1, num2, num3);
  printf("The greatest number : %d\n", (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3));
  printf("Thank you for using the greatest number finder program.\n");
  return 0;
}
