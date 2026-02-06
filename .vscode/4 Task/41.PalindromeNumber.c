#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Palindrome Number Checker \n ");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Palindrome Check of %d:\n", num);

  int reverse = 0;
  int copy_num = num;
  while (copy_num != 0)
  {
    int last_digit = copy_num % 10;
    reverse = reverse * 10 + last_digit;
    copy_num = copy_num / 10;
  }

  num == reverse ? printf("The number is a Palindrome Number\n") : printf("The number is not a Palindrome Number\n");
}