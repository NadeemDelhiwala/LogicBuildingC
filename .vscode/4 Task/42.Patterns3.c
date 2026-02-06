#include <stdio.h>
int main()
{
  int rows;
  printf("Welcome to Pattern Number .. \n");
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Your Pattern Number for Left Half Pyramid %d:", rows);
  for (int i = rows; i >= 1; i--)
  {
    /* code */
    for (int j = 0; j < rows; j++)
    {
      /* code */
      if (j < i)
      {
        printf(" ");
      }
      else
      {
        printf("*");
      }
    }
    printf("\n");
  }
}