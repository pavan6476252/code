#include<iostream>
using namespace std;

int gcd(int m,int n){
   if(n==0){
    return m;
   }
   return gcd(n,m%n );
}
// int gcd(int a,int x){
//     if(a==0)return x;
//     return gcd(x%a,a);
// }
int main(){
    int n =8;
    int m =8;
    cout<<gcd(m , n);    
    return 1;
}