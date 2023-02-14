#include <bits/stdc++.h>
using namespace std;

// void Tower(int n ,string source,string desti,string aux){
//     if(n==0){
//         return ;
//     }
//     Tower(n-1,source ,aux,desti);
//     cout<<"move "<<source<<"to"<<desti<<endl;
//     Tower(n-1,aux,desti,source);
// }

void Tower(int n,string source,string aux,string dest){
    if(n==0)return;
    Tower(n-1,source,dest,aux);
    cout<<source<<"---"<<dest<<endl;
    Tower(n-1,aux,source,dest);
}
int main()
{

    Tower(3,"A","B","C");
    return 1;
}