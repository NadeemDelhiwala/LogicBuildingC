
#include <stdio.h>
int main()
{
  printf("Welcome to Even Number Printing.. \n");
  printf("Enter a max number to print even numbers up to: ");
  int max_num;
  scanf("%d", &max_num);
  printf("Even numbers from 0 to %d are:\n", max_num);
  for (int i = 0; i <= max_num; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d ", i); // Print the even number
    }
    else
    {
      continue; // Skip the rest of the loop if it's odd
    }
  }
}
