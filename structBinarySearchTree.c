#include <stdio.h>
#include <stdlib.h>
struct BST
{
    struct BST *left;
    struct BST *right;
    int data;
};

struct BST* initBST(int val)
{
    struct BST* root = (struct BST*)malloc(sizeof(struct BST));
    root->data = val;
    root->right = NULL;
    root->left = NULL;
    return root;
}

struct BST* insertBST(struct BST* root, int insertVal)
{
    if(root == NULL) return initBST(insertVal);
    if(insertVal < root->data) root->left = insertBST(root->left, insertVal);
    else if(insertVal > root->data) root->right = insertBST(root->right, insertVal);
    else(root->data = insertVal);
    return root;
}

void inOrderTraversalBST(struct BST* root)
{
    if(root == NULL) return;
    inOrderTraversalBST(root->left);
    printf("%d ", root->data);
    inOrderTraversalBST(root->right);
}

int main()
{
    struct BST *root = initBST(50);
    int a[] = {25, 75, 10, 28, 60, 100};
    for(int i=0;i<6;i++)    insertBST(root, a[i]);
    inOrderTraversalBST(root);
}