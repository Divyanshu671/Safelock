#include<iostream>
using namespace std;
inline int cube(int n){
    return n*n*n;
}
int main(){
    int s;
    cin>>s;
    cout<<"CUBE of integer is "<<cube(s);
}