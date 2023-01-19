#include <iostream>
using namespace std;
struct node
{
    int idata;
    struct node *left, *right;
};

struct node *newNode(int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->idata = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct node *insert(struct node *root, int data)
{
    if (root == NULL)
    {
        return newNode(data);
    }
    if (data < root->idata)

        root->left = insert(root->left, data);

    else
        root->right = insert(root->right, data);

    return root;
}

void inorder(struct node *temp)
{
    if (temp != NULL){
        
    inorder(temp->left);
    cout << temp->idata << " ";
    inorder(temp->right);
}
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 15);
    root = insert(root, 43);
    root = insert(root, 1);
    root = insert(root, 4);
    root = insert(root, 18);

    inorder(root);
    return 0;
}