#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Reverse of Digits Generator \n ");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Reverse of Digits of %d:\n", num);

  int reverse = 0;
  int copy_num = num;
  while (copy_num != 0)
  {
    int last_digit = copy_num % 10;
    reverse = reverse * 10 + last_digit;
    copy_num = copy_num / 10;
  }

  printf("Reverse of Digits of %d is %d\n", num, reverse);
  return 0;
}