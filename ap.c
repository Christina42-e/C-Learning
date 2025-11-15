//find the area and perimeter of rectangle
#include<stdio.h>
int main()
{
    int a, b , area, peri;
    printf("Enter a and b");
    scanf("%d %d", &a, &b);
    area = a * b;
    printf("Area of a and b is %d\n", area);
    peri = 2 *(a + b);
    printf("Perimeter of a and b is %d", peri);
    return 0;
}


