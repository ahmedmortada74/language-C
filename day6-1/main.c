#include <stdio.h>
#include <stdlib.h>
       struct rectangle {
         int width  ;
         int hight;

            };
int main()
{
   struct rectangle rect;
//   rect.width = 6;
//   rect.hight = 5;
//     area = rect.width*rect.hight;
//  int  rect.width =6 ;
//  int rect.hight =5 ;
        printf("Enter Rectangle:\n");
        scanf("%d",&rect.width);
//          printf("Enter  hight of  Rectangle:",rect.hight);
        scanf("%d",&rect.hight);
//    printf("\n---------------------\n");
//     int  area ;
//    area = width*hight;
//     printf("eaea of rectangle is %d",area);
  printf(" width= %d ,hidght =%d \n",rect.width,rect.hight);
    return 0;
}
