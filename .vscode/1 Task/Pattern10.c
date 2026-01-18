#include <stdio.h>
int main()
{
  int a = 0;
  int b = 0;
  printf("Enter two integers for swapping without third variable: \n");
  scanf("%d %d", &a, &b);
  printf("Before swapping: a = %d, b = %d\n", a, b);
  a = a + b;
  b = a - b;  
  a = a - b;
  printf("After swapping: a = %d, b = %d\n", a, b);

  return 0;
}