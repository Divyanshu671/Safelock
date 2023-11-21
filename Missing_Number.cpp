#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,d;
    cin>>n;
    vector<int> arr;
    for(i=0;i<n-1;i++){
        cin>>d;
        arr.push_back(d);
    }
    sort(arr.begin(),arr.end());
    for(i=1;i<=n;i++){
        if(arr[i-1]!=i){
            cout<<i;
            break;
        }
    }
    return 0;
}