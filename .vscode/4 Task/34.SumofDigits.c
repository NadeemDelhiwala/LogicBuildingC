#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Sum of Digits Generator \n ");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Sum of Digits of %d:\n", num);
  int sum = 0;
  while (num != 0)
  {
    /* code */
    int last_digit = num % 10;
    sum = sum + last_digit;
    num = num / 10;
  }
  /*
   while (num > 0)
  {
  //shortcut way
  sum+= num % 10;
  num/= 10;
}*/
  printf("Sum of Digits is %d\n", sum);
  return 0;
}