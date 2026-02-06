#include <stdio.h>
int main()
{
  int rows;
  printf("Welcome to Pattern Number .. \n");
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Your Pattern Number for Left Half Pyramid %d:", rows);
  for (int i_rows = 1; i_rows <= rows; i_rows++)
  {
    printf("\n");
    // spaces
    for (int printingspaces = 1; printingspaces <= rows - i_rows; printingspaces++)
    {
      printf(" ");
    }
    // stars
    for (int printingstars = 1; printingstars <= i_rows; printingstars++)
    {

      printf("*");
    }
  }
}
