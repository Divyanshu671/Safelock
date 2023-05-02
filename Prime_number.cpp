#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string primeNumber(int n){
        if(n==1)
          return "No";
        for(int i=2;i<=sqrt(n);i++)
          if(n%i==0)
            return "No";
        return "Yes";
    }
};
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    Solution ob;
    cout<<ob.primeNumber(n)<<endl;
  }
  return 0;
}
