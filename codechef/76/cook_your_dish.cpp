#include <iostream>
using namespace std;

int main() {
  int test;
  cin>>test;
  while(test--) {
      int num;
      cin>>num;
      string s;
      cin>>s;
      int count=0;
      for(auto v : s) {
          if(v=='1')
              count++;
      }
      cout<<min(count,num-count+1)<<endl;
  }
  return 0;
}