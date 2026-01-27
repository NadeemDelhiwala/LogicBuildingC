#include <stdio.h>
int main()
{
  int num = 1;
  printf("Odd Loop \n");
  while (num != 10)
  {
    printf("Enter the number ");
    scanf(" %d", &num);
  }
  printf("Congrats you have guessed the correct number %d \n", num);

  return 0;
}