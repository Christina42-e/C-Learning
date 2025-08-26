#include<stdio.h>
int main()
{
    float pi=3.14,r, aoc;
    printf("Enter radius");
    scanf("%2f",&r);
    aoc= pi*r*r;
    printf("The area of circle =%2f ", aoc);
    return 0;
}