

typedef struct bstnode
{
    int value;
    char dishname[10];
    struct bstnode *left;
    struct bstnode *right;
} BSTnode;


BSTnode *insert(BSTnode *T, int value, char dish1[10]);


extern BSTnode *createTree();

int search(BSTnode *root, int key);

void inorder(BSTnode *T);

void preorder(BSTnode *T);

void postorder(BSTnode *T);

BSTnode *insert(BSTnode *T, int value, char dish1[10]);

