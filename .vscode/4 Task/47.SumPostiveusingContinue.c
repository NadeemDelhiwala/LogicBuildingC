#include <stdio.h>
int main()
{
  int pos_num;
  printf("Welcome to Number Entery .. \n");
  int sum = 0;
  do
  {
    printf("Enter a positive number (or zero to stop): ");
    scanf("%d", &pos_num);
    if (pos_num > 0)
    {
      sum += pos_num; // Add to sum if it's positive
    }
    else
    {
      continue; // Skip the rest of the loop if it's zero or negative
    }

    /* code */
  } while (pos_num != 0);

  printf("Final Sum (excluding the zero): %d", sum);
}
