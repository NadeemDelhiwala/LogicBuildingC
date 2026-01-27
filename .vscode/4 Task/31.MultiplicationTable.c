#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Multiplication Table Generator \n ");
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Multiplication Table of %d:\n", num);
  int i = 1;
  while (i <= 10)
  {
    /* code */
    printf("%d x %d =%d\n", num, i, num * i);
    i++;
  }

  // for (i = 1; i <= 10; i++)
  // {
  //   printf("%d x %d = %d\n", n, i, n * i);
  // }
  return 0;
}