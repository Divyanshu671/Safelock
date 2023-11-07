#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter String : ";
    getline(cin,s);

    int i=0,j=1;
    int ans=0;
    while(j<s.size()){
        if(s[j]!=s[j-1]){
            ans=max(ans,j-i);
            i=j;
        }
        j++;
    }
    ans=max(ans,j-i);
    cout<<"Maximum size Subarray of same characters : "<<ans<<endl;
    return 0;
}
