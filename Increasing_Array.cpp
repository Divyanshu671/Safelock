#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,i,d;
    cin>>n;
    vector<int> arr;
    for(i=0;i<n;i++){
        cin>>d;
        arr.push_back(d);
    }
    d=0;
    for(i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            d+=arr[i-1]-arr[i];
            arr[i]=arr[i-1];
        }
    }
    cout<<d;
    return 0;
}