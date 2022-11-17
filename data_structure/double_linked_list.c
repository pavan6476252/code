
#include <iostream>

using namespace std;
struct node {
    int data;
    struct node *next;
    struct node *prev;
} *head ,*tail,*temp ,*newNode;


void insert();
void insertAt();
void display();
void inserAtBegg();
void rev();
void insertAtLast();
void delAtSta();
void deleteAt();
void delAtEnd();
int main()
{
    
    cout<<"double linked list"<<endl;
    char option = 'y';
    int sel;
    while(option =='y' || option =='Y'){
        cout<<"1 for insertion"<<endl;
        cout<<"2 for insert at end"<<endl;
        cout<<"3 for insert at beginning"<<endl;
    
        cout<<"4 delete at start"<<endl;
        cout<<"5 delete at end"<<endl;
        cout<<"6 delete at position"<<endl;
        cout<<"7 for reverse"<<endl;
       
        cout<<"8 for exit"<<endl;
        cin>>sel;
        switch(sel){
            case 1 : insert();
            break;
             case 2 : insertAtLast();
            break;
             case 3 : inserAtBegg();
            break;
          
              case 4 : delAtSta();
            break;
             case 5 : delAtEnd();
            break;
             case 6 : deleteAt();
            break;
            case 7: rev();
            break;
            
        }
        cout << "\033[2J\033[1;1H";
        
        if(option ==8){
            break;
        }
    }
// insert();
// insert();
// insert();
// // display();
// // inserAtBegg();
// // insertAt();
// // display();
// // insertAtLast();
// // delAtSta();
// // display();
// // delAtEnd();
// // display();
// deleteAt();
// // display();
// // rev();
// display();
    return 0;
}

void deleteAt(){
    cout<<"delete at"<<endl;
    int i;
    cin>>i;
    temp=head;
  for(int j=0;j<i;j++){
      temp =temp->next;
  }
  cout<<"element is "<<temp->data<<endl;
 
 newNode =temp;
 newNode->prev->next =newNode->next;
 newNode->next->prev= newNode->prev;
 
  free(newNode);

 
}
void delAtEnd ()
{cout<<"delete at end"<<endl;
    temp=tail;
    tail=tail->prev;
    tail->next=NULL;
    free(temp);
}
void delAtSta()
{
    temp=head;
    head=head->next;
    head->prev=NULL;
    free(temp);
}
void insertAtLast()
{
    int idata;
    cin>>idata;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=idata;
    newNode->next =NULL;
    newNode->prev=tail;
    tail->next=newNode;
    tail =newNode;
}

void rev(){
    cout<<"rev"<<endl;
    temp =tail;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

void inserAtBegg()
{
    int idata;
    cin>> idata;
    newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=idata;
    newNode->prev=NULL;
    newNode->next=head;
    head=newNode;
    
}

void insertAt(){
    newNode = (struct node*) malloc(sizeof(struct node));
    int pos;
    cout<<"enter position"<<endl;
    cin>>pos;
    int idata;
    cin>>idata;
    temp = head;
    while(pos-1){
        temp=temp->next;
        pos--;
    }
    newNode->data = idata;
    newNode->next = temp->next;
    temp->next->prev =newNode;
    temp->next =newNode;
    newNode->prev =temp;
}
void display(){
    temp  =head;
    while(temp){
        cout<<temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}


void insert(){
    int idata;
    cin>>idata;
    newNode = (struct node* ) malloc (sizeof(struct node));
    
    newNode->data = idata;
    newNode->prev =NULL;
    newNode->next =NULL;
    if(head ==NULL)
    {
        head =newNode;
        tail =newNode;
    }
    else{
    newNode->prev = tail;
    tail->next =newNode;
    tail = newNode;
    
    }
}
