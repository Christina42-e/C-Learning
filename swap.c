#include<stdio.h>
int main()
{
    int  a , b , swap;     // declare variables
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);  // a= 4, b = 3................a = 3 ,b = 4
    swap = a;             // swap = 4     // store 'a' in temporary variable
    a = b;                   //a = 3   // assign 'b' to 'a'
    b = swap;                 // b = 4  // assign original 'a' to 'b'
    printf("The value of a = %d\n", a);
    printf("The value of b = %d\n", b);
    return 0;
    
}