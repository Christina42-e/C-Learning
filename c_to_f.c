#include<stdio.h>
int main()
{
    float f , c;
    printf("Enter celsius value required for conversion");
    scanf("%.1f", &c);
    f = (c * 1.8)+32;
    printf("The converted fahrenheit value is %.1f", f);
    return 0;

    
}