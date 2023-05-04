#include<bits/stdc++.h>
using namespace std;
int Factorial(int n){
  return (n==0 || n==1) ? 1 : n*Factorial(n-1);
}
int main(){
  int n;
  cout<<"Enter the number to find factorial: ";
  cin>>n;
  cout<<"The factorial of "<<n<<" is "<<Factorial(n)<<endl;
  return 0;
}
