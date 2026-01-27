#include <stdio.h>
int main()
{
  int i;
  do
  {
    printf("Enter a number: ");
    scanf("%d", &i);
    /* code */
  } while (i != 10);
  printf("You entered 10, exiting the loop.\n");
  return 0;
}