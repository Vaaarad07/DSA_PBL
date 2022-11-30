#include "stdio.h"
#include "stdlib.h"
//#include "linkedlists.c"


typedef struct customer
{
    int id;
    int quantity;
    int price;
    char name[20];
    char date[8];
    // char address[50];
} customer;

customer data[100];
int rear = -1;
int front = -1;
int id = 1;
int sum = 0;
int isEmpty()
{
    if (rear == front)
        return 1;
    else
        return 0;
}

int isFull()
{
    if (rear == 2)
        return 1;
    else
        return 0;
}

void placeOrder()
{
    int sum = 0;
    int temp1;
    if (isFull() == 0)
    {
        rear++;
        data[rear].id = id++;
        printf("------PLACE ORDER----------\n");
        printf("Enter date: ");
        scanf("%s", data[rear].date);
        printf("Enter name: ");
        scanf("%s", data[rear].name); // printf("Enter address:\n");
        // scanf("%s", data[rear].address);

        printf("Enter number of pizzas to deliver: ");
        scanf("%d", &data[rear].quantity);
        for(int i =0; i<data[rear].quantity; i++){
            printf("Enter price of dish %d: ", i+1);
            scanf("%d", &temp1);
            sum += temp1;
        }
        data[rear].price = sum;
        printf("Total bill amount is: %d\n", data[rear].price);
    }
    else
        printf("Order is full!\n");
}

customer dispatchOrder()
{
    if (isEmpty() == 0)
    {
        front++;
        printf("\nDispatched order is:\n");
        printf("ID:\t%d\nName:\t%s\nQuantity:%d\nBill: %d\n", data[front].id, data[front].name, data[front].quantity, data[front].price);
    }
    else
        printf("No more orders to be dispatched.\n");

    return data[front];
}

void printOrders()
{
     
    if(front+1 <= rear){
        printf("The pending orders are:\n");
        for (int i = front + 1; i <= rear; i++)
        {
            printf("ID:\t%d\nName:\t%s\nQuantity:\t%d\n", data[i].id, data[i].name, data[i].quantity);
        }
    }
    else{
        printf("No pending orders!\n");
    }
}
