

typedef struct customer
{
    int id;
    int quantity;
    int price;
    char name[20];
    char date[8];
    // char address[50];
} customer;

int isEmpty();

int isFull();

void placeOrder();

customer dispatchOrder();

void printOrders();