#include <Stdio.h>
void swap(int, int);
int main(int argc, char const *argv[])
{
  /* code */
  int x = 4;
  int y = 7;
  printf("\n+++++++++++++++\n");

  printf("The values of x and y called from Main function before function call are: %d and %d\n", x, y);
  printf("\n+++++++++++++++\n");

  swap(x, y);
  printf("\n+++++++++++++++\n");
  printf("The values of x and y called from Main function after function call are: %d and %d\n", x, y);
  return 0;
}
void swap(int first, int second)
{
  printf("Swap function is called\n");
  printf("The numbers before swapping are: \n");
  printf("The first number is: %d\n", first);
  printf("The second number is: %d\n", second);
  int temp;
  temp = first;
  first = second;
  second = temp;
  printf("The numbers after swapping are: \n");
  printf("The first number is: %d\n", first);
  printf("The second number is: %d\n", second);
  printf("Swap function ends\n");
}
