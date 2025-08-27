#include<stdio.h>
int main()
{
    int a, b, sum;  // int = integer 1234567890.......a, b,sum   1.2 2.3 2.4
    printf("Enter the numbers a");  // eneter a number a
    scanf("%d",&a);          //fs =format specifier = %d = integer, %f = float, %lf = double, %c = chat
    printf("Enter the numbers b"); //  & = address specifier
    scanf("%d",&b); 
    sum = a + b;
   
    printf("The ans is= %d", sum);
    return 0;
    
    
}