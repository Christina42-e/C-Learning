#include<stdio.h>
void sumfunction(int x, int y)
{
    int sum = x + y;
    printf("The sum of x and y is %d", sum);
}
int main()
{
    sumfunction(6,7);
    return 0;
}