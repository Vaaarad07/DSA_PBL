#include "stdio.h"
#include "stdlib.h"
#include "linkedlists.h"
 



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
     
}

 