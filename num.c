#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a, b, c:");
    scanf("%d %d %d", &a, &b, &c);

    {
    if(a > b && a > c)
    { 
        printf("The gretest number = %d", a);
    }

    else if(b > c)
    {
        printf("The gretest number = %d",b);
    }

    else 
    {
        printf("The gretest number = %d",c);
    }
    }
    return 0;
}