#include <stdio.h>
#include <stdlib.h>


  int extended (char k)

  {
   if (k==0 || k==250)
   {
     return 1;
   }
   else
    {
       return 0;
   }
  }
  int main ()
  {
      printf("press any key\n");
     char k= getch();
      if (extended(k))
        {
            printf("extended key");
        }
      else {
    printf("You pressed a normal key\n");

  }
  return 0;
  }


