#include "stdio.h"
#include "stdlib.h"
//#include "queue.c"
//#include "alpha.c"



typedef struct node{
    int idList;
    char nameList[25];
    int quantityList;
    char dateList[8];
    int pricelist;
    struct node *link;
    
}node;


/*typedef struct customer_list
{
    int idlist;
    int quantitylist;
    char namelist[20];
    char datelist[8];
    // char address[50];
} customer_list;*/

/*typedef struct customer
{
    int id;
    int quantity;
    char name[20];
    char date[8];
    // char address[50];
} customer;*/

//node *create(customer xyz);
//void print(node *head);


node *create(int id1, int quantity1, char name1[20], char date1[8], int price1){
    
    node *head = NULL;
    node *p;
    int x, i;
        
        if (head == NULL){
            p = head = (node* )malloc(sizeof(node));
        }
        
        else{
            p->link = (node* )malloc(sizeof(node));
            p = p->link;
            
        }
        
        p->link = NULL;
        //scanf("%d", &(p->data)); 
        for(int i = 0; i < 25; i++){
            p->nameList[i] = name1[i];
        }
        for(int i = 0; i < 8; i++){
            p->dateList[i] = date1[i];    
        }
        p->idList = id1;
        p->quantityList = quantity1;
        p->pricelist = price1;

    return(head);
    
}

void print(node *head){
    
    node *p;
    printf("\n\n");
    int i = 1;
    for (p = head; p!=NULL;p = p->link){

        printf("Date is: ");
        //for(int i = 0; i < 8; i++){
            printf("%s", &p->dateList[0]);
        //}
        printf("\nID is: %d\n", p->idList);
        printf("Name : ");
        //for(int i = 0; i < 25; i++){
            printf("%s", &p->nameList[0]);
        //}
        printf("\nquantity is: %d\n", p->quantityList);
        printf("\nBill amount was: %d", p->pricelist);
        /*printf("Data %d is: %d\n",i, p->data);
        printf("Data %d is: %d\n",i, p->data);
        printf("Data %d is: %d\n",i, p->data);*/
        i+=1;
    }
    //printf("--------------------------------------\n");
    
}

/*
node *findlast(node *head){

    node *temp = head;

    for (temp = head; temp->link!=NULL; temp=temp->link){

    }
    return temp;


}

node *inBetween(node *head, int data_mid, int after_serial){

    //int data_mid, after_serial;
    node *before=head;
    node *after=head;
    node *ptr;
    //data_mid = 97;
    //after_serial = 3;

    ptr = (node*)malloc(sizeof(node));
    ptr->data = data_mid;

    for (int j=0; j<after_serial-1; j++){

        after = after->link;
         

    }//after is the node jyachanantar new add karaychay
     //after chya link madhe ptr cha address      (1)
     //after chi link == ptr chi link             (2)

    ptr->link = after->link;   //   (2)
    after->link = ptr;         //   (1)
     
    
    return head;

}


node *atStart(node *head, int data_start){

    node *ptr;
    //int data_start;

    ptr = (node*)malloc(sizeof(node));                  //created a node to be added
    ptr->data =  data_start;
    ptr->link = head;

    head = ptr;                                         //head address == new node

    return head;

}


node *atEnd(node *head, int data_end){

    node *ptr;
    //int data_end=40;

    ptr = (node*)malloc(sizeof(node));
    ptr->data = data_end;
    ptr->link = NULL;

    node *last = findlast(head);
    last->link = ptr;

    return head;
}


node *deleteEnd(node *head){

    node *temp;

    for(temp=head; temp->link->link != NULL; temp=temp->link){

    }
    free(temp->link->link);
    temp->link = NULL;

    return head;

}

node *deleteStart(node *head){

    node *temp;
    temp = head->link;
    free(head);

    return temp;

}

node *deleteMidData(node *head, int del_data){

    node *temp;
    node *delink;       //pointer to store link of the node that is next to the node to be deleted
    //int del_data = 5;      //data to be deleted
    
    for(temp = head; temp->link->data != del_data; temp=temp->link){

    }
    delink = temp->link->link;
    free(temp->link);
    temp->link = delink;

    return head;

    


}
*/