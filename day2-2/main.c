#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

      char p;
    printf("Enter a character: ");
    scanf("%c", &p);
    switch (p){
        case 'a':
        printf("%c is the vowel ",p);
        break;
    case 'o':
        printf("%c is the vowel ",p);
         break;
    case 'i':
        printf("%c is the vowel ",p);
         break;
    case 'e':
        printf("%c is the vowel ",p);
         default:
         ("%c is not the vowel",p);
          break;
    }
    return 0;
}
