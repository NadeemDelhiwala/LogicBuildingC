#include <stdio.h>
int main()
{
  int u_Age;
  char user_first_name[50];
  char user_last_name[50];

  printf("Enter your first name: ");
  scanf("%49s", user_first_name); // no & and no \n

  printf("Enter your last name: ");
  scanf("%49s", user_last_name); // no & and no \n

  printf("Enter your age: ");
  scanf("%d", &u_Age); // keep & for integers

  printf("The information you entered is:\n");
  printf("Hello %s %s. You are %d years old.\n", user_first_name, user_last_name, u_Age);

  return 0;
}