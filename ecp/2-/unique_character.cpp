#include<iostream>
using namespace std;

int main(){
    string str="aaabbbcdefghi";
    int count=0;
    for(int i=1;i<str.length();i++){
        if((str[i-1] >='a' && str[i-1]<='z') || (str[i-1] >='A' && str[i-1]<='Z')){
            if(str[i]!=str[i-1])
            count++;
        }
    }
    cout<<count;
    return 1;
}