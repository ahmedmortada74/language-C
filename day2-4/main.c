#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float money =3000;
    float intrest =0.2;
//    closed loop
     for(int i =0; i<3; i++);
     {
         money=money+(money*intrest);


     }
     printf("Your balance is =%f",money);
    return 0;
}
