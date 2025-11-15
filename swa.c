#include<stdio.h>
int main()
{
   int a,b,swap;
   printf("enter two numbwe");
   scanf("%d %d", &a, &b);
   printf("you enter a = %d\n", a);
   printf("you enter b = %d\n", b);
   a = b;
   b= a;
   printf("Now a is %d\n", a);
   printf("Now b is %d", b);
   return 0;

}