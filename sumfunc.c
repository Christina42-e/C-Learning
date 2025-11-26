#include<stdio.h>
int myfunction(int x, int y)
{
    return x + y;
}
int main()
{
    int result1 = myfunction(2,4);
    int result2 = myfunction(6,8);
    int result3 = myfunction(10,12);

    printf("Result1 is %d\n", result1);
    printf("Result3 is %d\n", result2);
    printf("Result2 is %d", result3);

    return 0;
}

