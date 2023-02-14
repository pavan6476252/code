#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
 int test;
 cin>>test;
 while(test--){
           int n,choice=1;
     cin>>n;
     vector<int>vector;
     map<int, int, greater<int>>map;
     int temp;
     for(int i=0; i<n; i++){
         cin>>temp;
         vector.push_back(temp);
     }
     for(auto i : vector)
       map[i]++;
     for(auto it:map)
         if(it.second%2){
             choice=0;
             break;
         }
     if(choice)
        cout<<"Zenyk"<<endl;
     else
        cout<<"Marichka"<<endl;
 }
	return 0;
}
