// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int top =-1;
int size =5;
int stack [100];
void push();
void pop();
void isFull();
void isEmpty();
void print();
int main() {
    int choice;
    cout<<"stack option \n"<<
    "1.push\n"<<
    "2.pop\n"<<
    "3.isFull\n"<<
    "4.isEmpty\n"<<
    "5.print\n"<<
    "6.exit"<<endl;


while(choice!=6){
    cout<< "select option "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        push();
        break;
        case 2 :
        pop();
        break;
        case 3:
        isFull(); 
        break;
        case 4 : 
        isEmpty();
        break;
        case 5:
        print();
        break;
        default :
        cout<< "enter valid option"<<endl;
    }
}
    return 0;
}
void isFull(){
    if(size== top)
    cout<<"Stack is full"<<endl;
    else
    cout<<"Stack is not full"<<endl;
}
void isEmpty(){
    if(top == -1)
    cout<<"Stack is empty"<<endl;
    else
    cout<<"Stack is not empty"<<endl;
}

void push()
{
    if(size == top){
        cout<<"stack is over flow"<<endl;
    }else{
    int n;
    cin>> n;
    top++;
    stack [ top] = n;
    cout<<"element pushed"<<endl;
}
}

void pop()
{
    if(size == -1){
        cout<<"stack is under flow"<<endl;
    }else{
    top--;
    cout<<"element poped !"<<endl;
}
}

void print(){
    if(top == -1)
    cout<<"no elemets to print"<<endl;
    else {
        int temp = top;
        cout<<"elements in stack are : ";
        for(int i =top; i>-1 ; i--){
            cout << stack[i] << " ";
            
        }
        cout<<endl;
    }
}
