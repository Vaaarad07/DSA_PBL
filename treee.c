#include "stdio.h"
#include "stdlib.h"
#include "treee.h"




BSTnode *createTree()
{
    int n, x, i ;
    char y[10];
    BSTnode *root = NULL;
    printf("Enter number of dishes in Menu: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter price of dish %d: ", i+1);
        scanf("%d", &x);
        printf("Enter dish name: ");
        scanf("%s", &y);
        root = insert(root, x, y);
    }
    return (root);
}
int search(BSTnode *root, int key)
{
    BSTnode *temp = root;
    while (temp != NULL)
    {
        if (key == temp->value)
            return 1;
        else if (key > temp->value)
            temp = temp->right;
        else
            temp = temp->left;
    }
    return 0;
}
void inorder(BSTnode *T)
{
    if (T != NULL)
    {
        inorder(T->left);
        printf("Dish name: %s\n", &T->dishname);
        printf("Price of the dish is: %d\n", T->value);
        printf("-\n");

        inorder(T->right);
    }
}
void preorder(BSTnode *T)
{
    if (T != NULL)
    {
        printf("%d\t", T->value);
        preorder(T->left);
        preorder(T->right);
    }
}
void postorder(BSTnode *T)
{
    if (T != NULL)
    {
        postorder(T->left);
        postorder(T->right);
        printf("%d\t", T->value);
    }
}


BSTnode *insert(BSTnode *T, int value, char dish1[10])
{
    BSTnode *newNode, *traverse, *allocate;
    newNode = (BSTnode *)malloc(sizeof(BSTnode));
    newNode->value = value;
    for(int i = 0; i < 10; i++){
        newNode->dishname[i] = dish1[i];
    }
    newNode->left = NULL;
    newNode->right = NULL;
    if (T == NULL)
        return (newNode);
    traverse = T;
    while (traverse != NULL)
    {
        allocate = traverse;
        if (value > traverse->value)
            traverse = traverse->right;
        else if (value < traverse->value)
            traverse = traverse->left;
        else
        {
            printf("Duplicate entry; sanitize inputs!\n");
            return (T);
        }
    }
    if (value > allocate->value)
        allocate->right = newNode;
    else
        allocate->left = newNode;
    return (T);
}
