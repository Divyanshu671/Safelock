#include<bits/stdc++.h>
using namespace std;
void TOH(int n,char a,char b,char c){
    if(n==0) return;
    TOH(n-1,a,c,b);
    cout<<"Move disk "<< n << " from rod " << a <<" to "<< b << endl;
    TOH(n-1,c,b,a);
}
int main(){
    int n;
    cout<<"Enter the number of disks to use in Tower of Hanoi: ";
    cin>>n;
    cout<<"Demonstraton of TOH :-"<<endl;
    TOH(n,'A','C','B');
}
