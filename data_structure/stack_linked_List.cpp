// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
struct node {
    int data;
    struct node *link;
}*top,*temp;
void push(){
    int idata;
    cin>> idata;
    temp = (struct node * ) mallco (sizeof(struct node));
    temp->data = idata;
    if(top ==NULL)
    top =temp;
    else{
        temp->link = top;
        top = temp;
    }
}
void pop(){
    if(temp==NULL){
        cout<<"stack underflow"<<endl;
    return;
        
    }
    temp = top;
    head = top->link;
    free(temp);
}
void display(){
    if(top ==NULL)
    cout<<"Stack is empty"<<endl;
}else{temp =top;
    while(temp){
        cout<<temp->data<<" ";
        temp =temp->link;
    }
}

int main() {
    push();
    return 0;
}
