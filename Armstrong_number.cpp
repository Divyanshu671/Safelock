#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int m=n;
        int r=0;
        while(m){
            int s=m%10;
            r+=s*s*s;
            m/=10;
        }
        if(r==n)
            return "Yes";
        else
            return "No";
    }
};
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    Solution ob;
    cout<<ob.armstrongNumber(n)<<endl;
  }
  return 0;
}
