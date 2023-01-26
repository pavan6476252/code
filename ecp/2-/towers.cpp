#include <bits/stdc++.h>
using namespace std;

void permutations(int n ,string source,string desti,string aux){
    if(n==0){
        return ;
    }
    permutations(n-1,source ,aux,desti);
    cout<<"move "<<source<<"to"<<desti<<endl;
    permutations(n-1,aux,desti,source);
}

int main()
{

    
    permutations(3,"A","B","C");
    return 1;
}