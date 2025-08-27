#include<stdio.h>
int main()
{
    float pi=3.14, r, aoc;       //float pi=3.14   const keyword....
    printf("radius");    // output
    scanf("%f",&r);
    aoc= pi*r*r;
    printf("The area of circle =%.3f\n ", aoc);  //%f    \n?  f = 6 byte........double 12 byte
    return 0;
}