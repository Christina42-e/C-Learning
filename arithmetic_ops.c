#include<stdio.h>
int main()
{
    int a, b, pro, diff, quo;
    printf("Enter any two numbers");
    scanf("%d %d",&a ,&b);
    pro = a * b;
    printf("Product of two numbers= %d\n", pro);
    diff = a - b;
    printf("Difference of two numbers= %d\n", diff);
    quo = a/b;
    printf("Quotient of two numbers= %d", quo);
    return 0;
    

}