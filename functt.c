#include<stdio.h>
int myfunction(int x, int y)
{
    return x + y;

}
int main()
{
    printf("The result is %d\n", myfunction(6, 8));
    return 0;
}