#include <stdio.h>
int main()
{
  int number = 1;
  printf("While Loop Example: Print numbers from 1 to 10\n");
  // while loop.
  while (number <= 10)
  {

    // body of while loop
    printf("%d\n", number);
    number++;
  }
  printf("Loop ended as number is now %d\n", number);
  printf("Exited from while loop.\n");
  printf("End of the Program.\n");
  printf("Thank you!\n");
  printf("Printing numbers in reverse order from 10 to 1\n");
  number = 10;
  while (number >= 1)
  { 
    printf("%d\n", number);
    number--;
    /* code */
  }
  printf("Loop ended as number is now %d\n", number);
  printf("Exited from while loop.\n");
  printf("End of the Program.\n");
  printf("Thank you!\n");
  return 0;
}