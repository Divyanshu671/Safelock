#include<bits/stdc++.h>
using namespace std;
int main(){
    try{
        throw 'x';
    }
    catch(int x){
        cout << "First catch";
    }
    catch(...){
        cout << "Second catch";
    }
}
