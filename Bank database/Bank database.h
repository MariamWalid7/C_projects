#ifndef BANK_DATABASE_H_INCLUDED
#define BANK_DATABASE_H_INCLUDED

typedef struct Client{

char name[50];
double cash;
char type[7];
int ID;

}client_t;

void CreateNewClient (void);
void EditClient (int ID);
void PrintClientData (int ID);
void TransferMoney (int destination_id, int source_id, int money);
void DeleteClientData (int ID);



#endif // BANK_DATABASE_H_INCLUDED
