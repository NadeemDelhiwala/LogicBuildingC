#include <stdio.h>
#include <math.h>
int main()
{
  int num;

  printf("Welcome to Armstrong Number Checker \n");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Armstrong Number of %d:\n", num);
  int sum = 0;
  int copy_num = num;
  while (copy_num != 0)
  {
    /* code */
    int last_digit = copy_num % 10;
    sum = sum + last_digit * last_digit * last_digit;
    copy_num = copy_num / 10;
  }
  sum == num ? printf("The number is an Armstrong Number\n") : printf("The number is not an Armstrong Number\n");
  return 0;
}