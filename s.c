#include<stdio.h>
int main()
{
    int age;
    char name[50];
    printf("enter your name");
    scanf("%s", name);
    printf("enter your age");
    scanf("%d", &age);
    printf("Your name is %s and your age is %d\n", name, age);
    return 0;
}