#include <stdio.h>
#include <stdlib.h>
//                        Q-2
 struct product
 {
     int    price ;
     int Quantity ;
 };
int main()
{
     struct product *ptrPro= malloc(sizeof(struct product));
   ptrPro->price;
    ptrPro->Quantity;

    printf("enter price of the prodact;");
     scanf("%d",&ptrPro->price);

    printf("enter Qantity of the prodact;");
    scanf("%d",&ptrPro->Quantity);

    printf("\n--------------------------------------------------------------------------------------------\n");

       printf("price=%d  qun=%d" ,ptrPro->price,ptrPro->Quantity );


    return 0;
}
