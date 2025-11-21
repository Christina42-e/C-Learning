#include<stdio.h>
int global = 4;
void display()
{
    printf("%d\n", global);
}
int main()
{
    printf("before change\t");
    display();

    printf("After change\t");
    global = 8;
    display();


    return 0;


}