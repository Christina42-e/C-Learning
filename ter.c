#include<stdio.h>
int main()
{
   int age;

  printf("Enter age");
  scanf("%d", &age);
  age >= 18 ? printf("adult\n") : printf("child\n");

  return 0;
}
