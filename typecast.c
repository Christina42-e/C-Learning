#include<stdio.h>
int main()
{
    float a = 2.2; // float variable
    int b = a;     // typecasting from float to int (decimal part removed)

    printf("Original float = %.2f\n", a);
    printf("After typecasting to int = %d\n", b);

    return 0;
    
}