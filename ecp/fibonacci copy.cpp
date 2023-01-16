#include<iostream>
using namespace std;

void fib(int n ,int a ,int b){
    if(n<=1){
        return ;
    }
    cout<<a+b<<" ";
    fib(n-1,b,a+b);
}

int main(){
    int n =5;
    cout<<0 <<" "<<1 <<" ";
    fib(5,0,1);    
    return 1;
}