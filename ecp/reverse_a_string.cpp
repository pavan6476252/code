#include<iostream>
using namespace std;

void fact(string s){
    if(s.length() ==0){
        return ;
    }

    string ros = s.substr(1);
    fact(ros);
    cout<<ros[0];
}

int main(){
    int n =5;
    fact("bbinod");    
    return 1;
}