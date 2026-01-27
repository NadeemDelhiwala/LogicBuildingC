#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Summing of Odd Numbers Generator\n");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("The number specified is %d \n", num);
  int i = 1;
  int sum = 0;
  while (i <= num)
  {
    /* code */
    if (i % 2 == 1)
    {
      sum += i;
    }
    i++;
  }
  printf("Sum of Odd Numbers up to %d is %d \n", num, sum);
  printf("End of Odd Numbers up to %d\n", num);
  return 0;
}