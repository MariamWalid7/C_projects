#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "Bank database.h"

extern int counter;
extern client_t arr[100];


void CreateNewClient (void){

client_t NewClient;

printf("Please enter the name of the client No.: %i",counter+1);
fflush(stdin);
fgets (NewClient.name);

label: printf("Please enter Cash of client No.: %i",counter+1);
scanf("%lf",&(NewClient.cash));

if((NewClient.cash)<0){

    printf("cash must be a positive or zero number\n");
    goto label;
}

printf("Please enter the type of client No.: %i",counter+1);
fflush(stdin);
gets (NewClient.type);

printf("Please enter the ID of client No.: %i",counter+1);
scanf("%i",&(NewClient.ID));

printf("\n\n");
arr [counter] = NewClient;
count++;
}

void EditClient (int ID){

int i;

for (i=0; i<=counter; i++){

    if(ID==(arr[i].ID)){

        printf("please enter the new name:");
        fflush(stdin);
        gets (arr[i].name);

        printf("please enter the new cash:");
        scanf("%lf",&(arr[i].cash));

        printf("please enter the new type:");
        fflush(stdin);
        gets (arr[i].type);

        printf("please enter the new ID:");
        scanf("%i",&(arr[i].ID));

        printf("\n\n");
        break;

    }
}

}

void PrintClientData (int ID){

        int i;
        for(i=0;i<=counter;i++){


        if (ID==(arr[i].ID)){


            printf("the name of the client number%i is :%s\n",i+1,arr[i].name);
            printf("the cash of the client number%i is :%0.2lf\n",i+1,arr[i].cash);
            printf("the type of the client number%i is :%s\n",i+1,arr[i].type);
            printf("the id of the client number%i is :%i\n",i+1,arr[i].ID);

            printf("\n\n");
            break ;
         }
         }


}

void TransferMoney (int destination_id, int source_id, int money){

      int i;
      int index_from = -1;
      int index_to = -1;

      label2: for(i=0; i<= counter; i++){

      if(arr[i].ID == source_id){

        index_from = i;
      }
     else if(arr[i].ID == destination_id){

        index_to = i;
      }
     else if(arr[i].ID == destination_id){

        index_to = i;
      }
     if((index_from!=-1)&&(index_to!=-1)){

             break;
          }

        }
     if((index_from==-1)||(index_to==-1)){

        printf("please enter valid id\n");

         }
     if(money>arr[index_from].cash)
        {
        printf("the money transfered is greater than your cash \n please enter the money transfered again and take care :");
        scanf("%lf",&money);
        goto label2;
        }

         arr[index_from].cash = (arr[index_from].cash) - money;
         arr[index_to].cash = (arr[index_to].cash) + money;

      }
}

void DeleteClientData (int ID){

    int i;
    int index ;
    for(i=0; i<=counter-1; i++){

        if(arr[i].ID == ID){
            index=i ;

    for(i=index;i<=counter-1;i++){

        arr[i]=arr[i+1];

         }
    }
}
        arr[counter].cash = -1; // -1 indicates this is empty place for a new client
        arr[counter].ID = -1;
        strcpy(arr[counter].name,"-1");
        strcpy(arr[counter].type,"-1");
        counter--;
}
