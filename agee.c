#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    {

    if(age >= 18)
    {
        printf("You're an Adult\n");
    }
    else if( age > 13 && age < 18 )
    {
        printf("You're a Teenager\n");
    }
    else
    {
        printf("You're a child\n");
    }

    }
    
    printf("Thankyou for the time!!!");
    return 0;
}
