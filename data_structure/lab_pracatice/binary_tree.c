// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *left,*right;
// }*root=NULL;

// struct node* newNode(int x){
//     struct node* temp = (struct node*)malloc(sizeof(struct node));
//     temp->data = x;
//     temp->left=temp->right=NULL;
//     return temp;
// }

// struct node* create(struct node* root , int x){
//     if(root==NULL){
//         return newNode(x);
//     }
//      if(x < root->data){
//          root->left = create(root->left,x);
//     }else{
//          root->right = create(root->right,x);
//     }
//     return root;
// }
// void print(struct node* root){
//     if(root!=NULL){

    
//     print(root->left);
//     printf("%d \t",root->data);
//     print(root->right);
// }
// }

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
} *root = NULL;

struct node *newNode(int x)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}

struct node *create(struct node *root, int x)
{
    if (root == NULL)
    {
        return newNode(x);
    }
    if (x < root->data)
    {
        root->left = create(root->left, x);
    }
    else
    {
        root->right = create(root->right, x);
    }
    return root;
}
void inorder(struct node *root)
{
    if (root != NULL)
    {

        inorder(root->left);
        printf("%d \t", root->data);
        inorder(root->right);
    }
}
void pre_order(struct node * root){
    if(root!=NULL){
        printf("%d \t",root->data);
        pre_order(root->left);
        pre_order(root->right);
    }
}
int height(struct node *root)
{
    if (root == NULL)
        return 0;

    return __max(height(root->left), height(root->right)) + 1;
}

struct node* min_right_sub(struct node * root){
    struct node *current = root;

  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// struct node* deleteNode(struct node * root ,int key){
//     if(root==NULL)
//     return root;
//     if(key<root->data)
//     root->left = deleteNode(root->left,key);
//     if(key> root->data)
//     root->right = deleteNode(root->right,key);
//     else {
//         if(root->right==NULL){
//             struct node *temp = root->left;
//             free(root);
//             return temp;
            
//         }else if(root->left ==NULL){
//               struct node *temp = root->right;
//             free(root);
//             return temp;
//         }

//         struct node *temp = min_right_sub(root);
//         root->data = temp->data;
        
//         root->right = deleteNode(root->right,temp->data);
        
//     }

//     return root;
// }
struct node* deleteNode(struct node* root, int key)
{
    // base case
    if (root == NULL)
        return root;
 
    // If the key to be deleted
    // is smaller than the root's
    // key, then it lies in left subtree
    if (key < root->data)
        root->left = deleteNode(root->left, key);
 
    // If the key to be deleted
    // is greater than the root's
    // key, then it lies in right subtree
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
 
    // if key is same as root's key,
    // then This is the node
    // to be deleted
    else {
        // node with only one child or no child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
 
        // node with two children:
        // Get the inorder successor
        // (smallest in the right subtree)
        struct node* temp = min_right_sub(root->right);
 
        // Copy the inorder
        // successor's content to this node
        root->data = temp->data;
 
        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
 


int main()
{

    root = create(root, 6);
    root = create(root, 1);
    root = create(root, 2);
    root = create(root, -5);
    root = create(root, -5);
    root = create(root, 5);
    root = create(root, 7);
    root = create(root, 3);
    root = create(root, 33);
    // inorder(root);
    // printf("////// HEIGHT //////\n");
    // printf("%d\n", height(root));
    printf("////// pre order //////\n");
    pre_order(root);
   root = deleteNode(root,-5);
    printf("////// after deleteNode //////\n");
    pre_order(root);

    return 0;
}
// void main(){
    
//     root= create(root,6);
//     root= create(root,1);
//     root= create(root,7);
//     root= create(root,3);
//     root= create(root,33);


// }