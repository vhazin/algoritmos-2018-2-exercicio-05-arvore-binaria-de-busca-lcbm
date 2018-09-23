#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node* leftChild, *rightChild;
} Node;

Node *initNode(int);
void insert(Node **, Node *);
void preOrder(Node *);
void inOrder(Node *);
void postOrder(Node *);

int main(void){
    short testCases;
    scanf("%hi", &testCases);
    for (int test = 1; test <= testCases; test++){
        short nodes;
        scanf("%hi", &nodes);
        // Insert
        Node *root = NULL;
        while(nodes--){
            int value;
            scanf("%d ", &value);
            insert(&root ,initNode(value));
        }
        // Print results
        printf("Case %d:\n", test);
        printf("Pre.:");
        preOrder(root);
        printf("\nIn..:");
        inOrder(root);
        printf("\nPost:");
        postOrder(root);
        printf("\n\n");
        
        free(root);
    }
    return 0;
}

Node *initNode(int value){
    Node *child = malloc(sizeof(Node));
    child->value = value;
    child->leftChild = NULL;
    child->rightChild = NULL;
    return child;
}

void insert(Node **node, Node *child){
    if(!*node)
        *node = child;
    else if (child->value <= (*node)->value)
        insert(&(*node)->leftChild, child);
    else
        insert(&(*node)->rightChild, child);
}

void preOrder(Node *tree){
    if (tree != NULL){
        printf(" %d", tree->value);
        preOrder(tree->leftChild);
        preOrder(tree->rightChild);
    }
}

void inOrder(Node *tree){
    if (tree != NULL){
        inOrder(tree->leftChild);
        printf(" %d", tree->value);
        inOrder(tree->rightChild);
    }
}

void postOrder(Node *tree){
    if (tree != NULL){
        postOrder(tree->leftChild);
        postOrder(tree->rightChild);
        printf(" %d", tree->value);
    }
}
