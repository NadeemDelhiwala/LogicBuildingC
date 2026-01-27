#include <stdio.h>
int main()
{
  int number = 1;
  printf("For Loop Example: Print numbers from 1 to 10\n");
  // For loop.
  for (number = 1; number <= 10; number++)
  {
    // body of for loop
    printf("%d\n", number);
  }
  printf("Loop ended as number is now %d\n", number);
  printf("Exited from for loop.\n");
  printf("End of the Program.\n");
  printf("Thank you!\n");
  printf("Printing numbers in reverse order from 10 to 1\n");
  int i = 0;
  for (; i >= 1; i--)
  {
    printf("%d\n", i);
  }
  printf("Loop ended as number is now %d\n", i);
  printf("Exited from for loop.\n");
  printf("End of the Program.\n");
  printf("Thank you!\n");
  return 0;
}