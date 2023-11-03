#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10000],C[10000],B[10000];
    int n,i,j;
    cout<<"Enter size : ";
    cin>>n;
    int k=0;
    for(i=0;i<n;i++){
        arr[i]=rand()%1000;
        k=max(k,arr[i]);
    }
    for(i=0;i<=k;i++){
        C[i]=0;
    }
    for(i=0;i<n;i++){
        C[arr[i]]=C[arr[i]]+1;
    }
    for(i=1;i<=k;i++){
        C[i]=C[i]+C[i-1];
    }
    for(i=0;i<n;i++){
        C[arr[i]]--;
        B[C[arr[i]]]=arr[i];
    }
    cout<<"Counting Sort:-"<<endl;
    for(i=0;i<n;i++){
        cout<<B[i]<<" ";
    }
    
}