#include<stdio.h>
int main()
{
    int  a , b , swap;     // declare variables
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    swap = a;                   // store 'a' in temporary variable
    a = b;                      // assign 'b' to 'a'
    b = swap;                   // assign original 'a' to 'b'
    printf("The value of a = %d\n", a);
    printf("The value of b = %d\n", b);
    return 0;
    
}