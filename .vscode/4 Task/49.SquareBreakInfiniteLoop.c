
#include <stdio.h>
int main()
{
  int num;
  printf("Welcome to the World of Square Number Printing.. \n");

  while (1)
  {
    printf("Enter a number to print its square (0 to exit): ");
    scanf("%d", &num);
    if (num == -1)
    {
      break;
    }
    printf("Square of %d is %d\n", num, num * num);
  }
  printf("Exiting the program. Goodbye!\n");

  return 0;
}
