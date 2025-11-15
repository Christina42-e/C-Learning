#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a b and c");
    scanf("%d %d %d", &a, &b, &c);
    if(a>b, a>c)
    {
        printf("Largest number is %d", a);
    }
    if(b>c)
    {
        printf("Largest number is %d", b);
    }
    else
    {
        printf("Largest number is %d", c);
    }
    return 0;
}
