// #include<stdio.h>
// char stack[100];
// int top=-1;
//     int priority(char a){
//         if(a=='(')return 0;
//         if(a=='+'|| a=='-')return 1;
//         if(a=='*'|| a=='/')return 2;
//     }
// void push(char a){
//     stack[++top] = a;
// }
// char pop(){
//     if(top==-1)return -1;
//     return stack[top--];
// }
    
// int main(){

//     //infix to postifx;
//     char str [20] = "(2+3)*4";
//     scanf("%s",str);
//     char *e,x;
//     e= str;
//     while(*e!= '\0'){
//         if(*e>='0'&&*e<='9'){
//             printf("%c",*e);
//         }else if(*e=='('){
//             push(*e);
//         }else if(*e == ')'){
//             while((x= pop())!='('){
//                 printf("%c",x);
//             }
//         }else {
//             if(priority(stack[top]) >= priority(*e)){
//                 printf("%c",pop());
//             }else
//             push(*e);
//         }


//         e++;
//     }
//     while((x =pop())!=-1)
//     printf("%c",x);

//     return 0;
// }






#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left,*right;
}*root=NULL;
struct node* newNode(struct node * root ,int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->left=temp->right=NULL;
    temp->data= x;
    return temp;
}

struct node * create(struct node *root , int x){
    if(root==NULL){
        return newNode(root,x);
    }
    if(x< root->data)
    root->left =create(root->left,x);
    else
    root->right = create(root->right,x);

    return root;
}
void inorder(struct node* root ){
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
struct node* small(struct node*root){
    struct node * temp;
    temp = root;
    while(root!=NULL && root->left!=NULL)
    temp = temp->left;
    return temp;
}

struct node * delete (struct node* root,int x){
    if(root==NULL)
    return root;
    else if(x< root->data){
        root->left =delete(root->left,x);
    
    }else if(x>root->data) {
        root->right= delete(root->right,x);
    }
    else{
        if(root->left==NULL && root->right==NULL){
        struct node *temp = root;
        free(temp);
        return NULL;}
        else if(root->left ==NULL){
            struct node *temp = root;
            root = root->right;
        free(temp);
            return root;
        }else if(root->right==NULL){
               struct node *temp = root;
            root = root->left;
            free(temp);
            return root;
        }
        else{
            struct node*temp = small(root->right);
        root->data = temp->data;
      root->right=  delete(root->right,temp->data);    
        }
    }
return root;
}

int main(){
    
   root= create(root,5);
    // printf("%d",root->data);
   root= create(root,2);
   root= create(root,1);
   root= create(root,3);
   root= create(root,8);
   inorder(root);
   printf("\n");
   delete(root,3);
   inorder(root);
}