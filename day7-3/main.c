#include <stdio.h>
#include <stdlib.h>

                        //Q-3
     struct product
{
   //member var

    int   id ;
    int quantity;
    int price;
};
   int main()
{
int size;
  printf("Enter Product:");
  scanf("%d",&size);
   struct product *ptrArrPro = malloc(sizeof( struct product) *size );
   ptrArrPro->      id;
    ptrArrPro->quantity;
     ptrArrPro->   price;

   for(int i =0; i <=size  ;i++)
   {
       printf("Enter Pro%d id ,quantity ,price:",1+1);
       scanf("%d",&ptrArrPro[i].id);
         scanf("%d",&ptrArrPro[i].quantity);
           scanf("%d",&ptrArrPro[i].price);
   }
     for(int i=0; i<=size;i++)
     {
         printf("Pro  &d id=%d ,quantity=%d ,price=%d \n",i+1,ptrArrPro[i].id,ptrArrPro[i].quantity,ptrArrPro[i].price);
     }





    return 0;
}
