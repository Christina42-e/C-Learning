#include<stdio.h>
void myfunction(char name[], int age)
{
    printf("HIII, my name is %s and my age is %d");
}
int main()
{
    myfunction("Aaron", 19);
    myfunction("Adam", 18);
    myfunction("Julliete", 17);
    return 0;
}