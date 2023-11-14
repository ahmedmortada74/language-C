#include <stdio.h>
#include <stdlib.h>

int main()
{
   //Calculate the total price
    int sum[2]={};
    int orderitems[2][3];
    for(int i=0; i<=1 ;i++)
    {
        for(int x=0;x<=2 ;x++)
        {
            sum[i]+= orderitems[i][x];
        }
    }

    for(int i=0; i<=2;i++)
        printf("orderitems sum of  %d = %d\n",i+1,sum[i]);
    return 0;
}
