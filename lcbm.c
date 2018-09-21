#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int leaf;
    struct node* leftBranch;
    struct node* rightBranch;
} Node;

Node *plantTree(int leaf);
void insert(Node *root, int leaf);
void preOrder(Node *tree);
void inOrder(Node *tree);
void postOrder(Node *tree);

int main(void){
    short testCases;
    scanf("%hi", &testCases);
    while(testCases--){
        short nodes;
        scanf("%hi", &nodes);

        Node *root = plantTree();
        while(nodes--){
            int leaf;
            scanf("%d ", &leaf);
            insert(root, leaf);

        }

    printf("\n");
    }
    return 0;
}

Node *plantTree(int leaf){
    Node *root = (Node *)malloc(sizeof(Node));
    root->leaf = leaf;
    root->leftBranch = NULL;
    root->rightBranch = NULL;

    return root;
}

void insert(Node *root, int leaf){

}

void preOrder(Node *tree){

}

void inOrder(Node *tree){

}

void postOrder(Node *tree){

}