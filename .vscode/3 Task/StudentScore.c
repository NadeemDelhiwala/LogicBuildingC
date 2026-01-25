#include <stdio.h>
int main()
{
  int marks = 0;
  printf("Student Score Calculator\n");
  printf("Enter marks obtained : ");
  scanf("%d", &marks);
  marks > 80 ? printf("High\n") : (marks >= 50 ? printf("Moderate\n") : printf("Low\n"));
  return 0;
}