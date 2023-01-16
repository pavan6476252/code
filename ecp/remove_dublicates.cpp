#include<iostream>
using namespace std;

string dubli(string s){
    if(s.length()==0 ) return "";
    char a  = s[0];
    string ans = dubli(s.substr(1));
    if(a ==ans[0]){
        return ans;
    }
    return (a+ans);
}

int main(){
    int n =5;
   cout<< dubli("aaddvvddees");    
    return 1;
}