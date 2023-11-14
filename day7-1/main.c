#include <stdio.h>
#include <stdlib.h>
//                                  Q-1
    struct product
{
   //member var

    int   id ;
    int quantity;
    int price;
};
int main()
{

//   int *ptr= malloc (sizeof(int));
//   printf("adress of integer in heap%d\n",ptr);
//   *ptr=15;
//   printf("value of integer in heap%d\n",*ptr);


      struct product *ptrPro= malloc(sizeof(struct product));
      ptrPro->id;
printf("enter id,quantity and price :\n");
   scanf("%d",ptrPro->id);
    scanf("%d",&ptrPro->quantity);
     scanf("%d",&ptrPro->price);
     printf("pro id =%d , quantity =%d,  price =%d\n",ptrPro->id,ptrPro->quantity,ptrPro->price);


    return 0;
}
