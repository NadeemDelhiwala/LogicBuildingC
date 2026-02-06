#include <stdio.h>
int main()
{
  int pos_num;
  printf("Welcome to Number Entery .. \n");
  int sum = 0;
  do
  {
    printf("Please enter a number greater than 0 : ");
    scanf("%d", &pos_num);
    sum += pos_num;

  } while (pos_num != 0);

  printf("Final Sum (excluding the zero): %d", sum);
}
