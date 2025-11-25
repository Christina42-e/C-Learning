#include<stdio.h>
void myfunction(int arrfunc[5])
{
    for(int i = 0; i<5 ; i++)
    printf("%d\n", arrfunc[i]);

}
int main()
{
    int arrfunc[5] = {10, 20, 30, 40, 50};
    myfunction(arrfunc);
    return 0;
}