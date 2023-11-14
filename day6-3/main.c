#include <stdio.h>
#include <stdlib.h>
  struct rectangle {
      int hight;
      int width;
            };
int main()
{
     struct rectangle rect;
     //pointer
     struct rectangle *PtrRect =& rect;
    PtrRect->hight= 2;
   PtrRect->width= 3;
//    rect = malloc(sizeof(struct rectangle));
//    if (rect==0)
//    {
//        printf("size of rectangle\n");
//    }
    printf("hight %d,width %d", PtrRect->hight,PtrRect->width);

 return 0;

}

