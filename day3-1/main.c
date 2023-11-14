#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price[4];
    int sum=0;
    for(int i=0; i<4 ; i++)
    {
        printf("Enter price commodity:\n");
        scanf("%d",&price[i]);
    }
    for (int i=0; i<4; i++)
    {
        printf("price of item %d =%d\n",i+1,price[i]);
        sum= sum+price[i];
       printf
       ("sum of price%d\n",sum);

    }


    return 0;
}
