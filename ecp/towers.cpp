#include<iostream>
using namespace std;

void tower(int n , char s,char d , char h){
    if(n==0) return;

    tower(n-1 , s , h ,d );
    cout<<"move tower from "<<s<< "  to "<<d<<endl;
    tower(n-1,h,d,s);
}

int main(){
    int n =5;
    tower(2 ,'A','C','B');    
    return 1;
}