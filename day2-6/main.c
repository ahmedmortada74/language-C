#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char c;
    for(char c='a'; c<'z'; c++);
    {
        printf("%c\n",c);
    }

    return 0;
}
