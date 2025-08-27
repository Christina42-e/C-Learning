#include<stdio.h>
int main()
{
  int age;

  printf("Enter age");
  scanf("%d", &age);

  if(age >= 18)
  {
    printf("Can vote\n");
  }

  else {
    printf("cannot vote\n");
  }

  printf("Thankyou!\n");

  return 0;

}