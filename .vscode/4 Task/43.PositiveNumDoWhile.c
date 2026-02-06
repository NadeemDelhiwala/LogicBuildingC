#include <stdio.h>
int main()
{
  int pos_num;
  printf("Welcome to Positive Number Entery .. \n");

  do
  {
    printf("Please enter a positive number : ");
    scanf("%d", &pos_num);

  } while (pos_num != 0);
  printf("Your entered number is : %d", pos_num);
}
