#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to Multiplication Table Generator .. \n");
  printf("Please enter a number to generate its multiplication table : ");
  scanf("%d", &num);
  for (int i = 1; i <= 10; i++)
  {
    printf("%d x %d = %d\n", num, i, num * i);
  }
}