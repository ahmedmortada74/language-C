#include <stdio.h>
#include <stdlib.h>



int main()
{
  int x=2 ;
  int y=4 ;
     printf ("befor swap: x=%d ,y=%d \n",x,y);
     swap(&x,&y);
     printf ("after swap: x=%d ,y=%d ",x,y);
   return 0;
}
void swap(int *x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


