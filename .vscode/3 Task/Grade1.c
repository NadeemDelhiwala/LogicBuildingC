#include <stdio.h>
int main()
{
  int marks = 0;
  printf("Student Grade Calculator\n");
  printf("Enter marks obtained : ");
  scanf("%d", &marks);
  if (marks > 90)
  {
    printf("Grade: A\n");
  }
  else if (marks > 75 && marks < 90)
  {
    printf("Grade: B\n");
  }
  else if (marks > 60 && marks < 75)
  {
    printf("Grade: C\n");
  }
  else if (marks > 30 && marks < 60)
  {
    printf("Grade: D\n");
  }
  else
  {
    printf("Grade: F\n");
  }
  return 0;
}