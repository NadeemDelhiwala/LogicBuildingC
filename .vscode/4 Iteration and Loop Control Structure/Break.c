#include <stdio.h>
int main()
{
  int number = 1;
  printf("Multiplication Table Example:\n");
  printf("Enter a number to print its multiplication table: ");
  scanf("%d", &number);
  for (int i = 1; i <= 10; i++)
  {
    printf("%d x %d = %d\n", number, i, number * i);
    if(i==5)
    {
      break;
    }
  }
  printf("Loop ended as number is now %d\n", number);
  printf("Exited from for loop.\n");
  printf("End of the Program.\n");
  printf("Thank you!\n");
  return 0;
}