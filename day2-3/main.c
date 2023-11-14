#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");


    char c;
    do{
        c=getch();
        printf("You Entered %c ascii is %i\n",c,c);
    }
            while(c !=27);

    return 0;
}
