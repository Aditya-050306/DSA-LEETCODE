#include<stdio.h>
#include<malloc.h>
struct bin_tree
{
    int data;
    struct bin_tree *left, *right;
};
typedef struct bin_tree node;
void insert(node **tree, int val)
{
    node *temp= NULL;
    if(!(*tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        *tree = temp;
    
    }

if(val < (*tree)->data)
{
    insert(&(*tree)->left, val);
}
else if(val > (*tree)->data)
{
    insert(&(*tree)->right, val);
}
}
void print_preorder(node *tree)
{
    if(tree)
    {
        printf("%d", tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }
}
void print_inorder(node *tree)
{
    if(tree)
    {
        print_inorder(tree->left);
        printf("%d", tree->data);
        print_inorder(tree->right);
    }
}
void print_postorder(node *tree)
{
    if(tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d", tree->data);
    }
}
void deltree(node *tree)
{
    if(tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}
node* search(node **tree, int val)
{
    if(!(*tree))
    {
        return NULL;
    }
if(val < (*tree)->data)
{
    search(&(*tree)->left, val);
}
else if(val > (*tree)->data)
{
    search(&(*tree)->right, val);
}
else
{
    return *tree;
}
}
int main()
{
    node *root;
    node *temp;
    root = NULL;
    insert(&root, 10);
    insert(&root, 5);
    insert(&root, 15);
    insert(&root, 3);
    insert(&root, 7);
    insert(&root, 12);
    insert(&root, 17);
    insert(&root, 10);
    insert(&root, 2);
    printf("preorder display\t");
    print_preorder(root);
    printf("\nInorder display\t\t");
    print_inorder(root);
    printf("\npostorder display\t");
    print_postorder(root);
    temp = search(&root, 10);
    if(temp)
    {
        printf("\nsearched node=\t%d", temp->data);
    }
    else
    {
        printf("element not found");
    
    }
    
}