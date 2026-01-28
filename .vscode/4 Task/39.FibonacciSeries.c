#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Fibonacci Series Generator \n ");
  printf("Enter a number up to which you need to view the Fibonacci Series: ");
  scanf("%d", &num);
  printf("Fibonacci Series up to %d:\n", num);

  printf(" 0");
  if (num > 0)
  {
    printf(" 1");
  }
  int previous = 0;
  int next = 1;
  while (next <= num)

  {
    /* code */
    int temp = previous + next;
    printf(" %d", temp);
    // move the window forward to next two numbers
    previous = next;
    next = temp;
  }

  return 0;
}