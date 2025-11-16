// to find negative positive or zero
#include<stdio.h>
int main()
{
    int a;
    printf("Enter student's marks");
    scanf("%d", &a);

    if(a>=90)
    { 
        printf("You got an A");
    }
    else if(a>=80)
    {
        printf("You got a B");
    }
    else if(a>=70)
    {
        printf("You got a C");
    }
    else if(a>=60)
    {
        printf("You got a D");
    }
    else
    { 
        printf("Sorry!!! You Failed...Better luck next time");
    }
    return 0;
}