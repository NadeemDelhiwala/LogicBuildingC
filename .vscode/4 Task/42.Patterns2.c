#include <stdio.h>
int main()
{
  int rows;
  printf("Welcome to Pattern Number .. \n");
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Your Pattern Number for Right Half Pyramid %d:\n", rows);

  for (int i_rows = rows; i_rows >= 1; i_rows--)
  {
    for (int printingstars = i_rows; printingstars >= 1; printingstars--)
    {

      printf("* ");
    }
    printf("\n");
  }
}