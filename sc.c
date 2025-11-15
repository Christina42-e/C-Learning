#include<stdio.h>
int main()
{
    int a , sq, cube;
    printf("Enter value of a");
    scanf("%d", &a);
    sq = a * a;
    printf("square of a is %d\n", sq);
    cube = a * a * a;
    printf("cube of a is %d", cube);
    return 0;
}

