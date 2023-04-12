#include <stdio.h>
#include <stdlib.h>
#include "Bank database.h"

int counter;
client_t arr[100];


int main()
{
char choice;
int ID_check;
int ID_from;
int ID_to;
double trans_money;

while(1){

  printf("please select one of the following options :\n\n1-create anew customer (press 1 to select this option)\n2-edit customer (press 2 to select this option )\n3-delete customer (press 3 to select this option)\n4-print customer data (press 4 to select this option)\n5-cash transfer from customer to another (press 5 t select this option)\n6-exit (press 6 to select this option)\n\nplease enter your choice:");
  scanf(" %c",&choice);
  switch(choice){

 case 1:
     if(counter >= 100){

        printf("you can't add more clients \n");
        break;
     }
  CreateNewClient();
  break;

 case 2:
    printf("please enter the id of the client you want to edit: ");
    scanf("%i",&ID_check);
    EditClient (ID_check);
    break;

 case 3:
    printf("please enter the id of the client you want to delete: ");
    scanf("%i",&ID_check);
    DeleteClientData (ID_check);
    break;

 case 4:
    printf("please enter the id of the client you want to print its data: ");
    scanf("%i",&ID_check);
    PrintClientData (ID_check);
    break;

 case 5:
    printf("please enter the source id: ");
    scanf("%i",&ID_from);

    printf("please enter the destination id: ");
    scanf("%i",&ID_to);

   /*Label3:*/ printf("please enter the amount of cash you want to transfer: ");
    scanf("%lf",&trans_money);



    TransferMoney (ID_to, ID_from, trans_money);
    break;

 case 6:
    exit(0);

 default:
    printf("please enter a valid choice\n\n");
    break;







    }

}


    return 0;
}
