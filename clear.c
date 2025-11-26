#include<stdio.h>

int calculatesum(int x, int y)
{
    return x + y;
}

int main()
{
   int resultarr[6];

   resultarr[0] = calculatesum(2,4);
   resultarr[1] = calculatesum(6,8);
   resultarr[2] = calculatesum(10,12);
   resultarr[3] = calculatesum(14,16);
   resultarr[4] = calculatesum(18,20);
   resultarr[5] = calculatesum(22,24);

   for(int i=0; i<6; i++)
   {
      printf("The result %d is %d\n", i + 1, resultarr[i]);
   }

   return 0;
}
