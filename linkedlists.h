
typedef struct node{
    int idList;
    char nameList[25];
    int quantityList;
    char dateList[8];
    int pricelist;
    struct node *link;
    
}node;

node *create(int id1, int quantity1, char name1[20], char date1[8], int price1);

void print(node *head);



