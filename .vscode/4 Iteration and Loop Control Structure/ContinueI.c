#include <stdio.h>
int main()
{

  for (int i = 1; i < 10; i++)
  {
    if (i % 2 == 0)
    {
      continue;
    }
    printf("%d\n", i);
    /* code */
  }
  printf("Without Continue statement Program.\n");
  for (int j = 0; j < 10; j++)
  {
    if (j % 2 == 1)
    {
      printf("%d\n", j);
    }
  }
  printf("End of the Program.\n");
  return 0;
}