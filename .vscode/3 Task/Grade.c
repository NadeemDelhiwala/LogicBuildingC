#include <stdio.h>
int main()
{
  int sum = 0, english = 0, maths = 0, science = 0, hindi = 0, marathi = 0, socialstudies = 0;
  float percentage = 0.0f;
  printf("Student Grade Calculator\n");
  printf("Enter marks obtained in English: ");
  scanf("%d", &english);
  printf("Enter marks obtained in Maths: ");
  scanf("%d", &maths);
  printf("Enter marks obtained in Science: ");
  scanf("%d", &science);
  printf("Enter marks obtained in Hindi: ");
  scanf("%d", &hindi);
  printf("Enter marks obtained in Marathi: ");
  scanf("%d", &marathi);
  printf("Enter marks obtained in Social Studies: ");
  scanf("%d", &socialstudies);
  sum = english + maths + science + hindi + marathi + socialstudies;
  percentage = (sum / 600.0f) * 100.0f;
  printf("Total Marks: %d out of 600\n", sum);
  printf("Percentage: %.2f%%\n", percentage);
  if (percentage > 90.0f)
  {
    printf("Grade: A\n");
  }
  else if (percentage > 75.0f)
  {
    printf("Grade: B\n");
  }
  else if (percentage > 60.0f)
  {
    printf("Grade: C\n");
  }
  else if (percentage > 30.0f)
  {
    printf("Grade: D\n");
  }
  else
  {
    printf("Grade: F\n");
  }
  return 0;
}