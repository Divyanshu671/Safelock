#include <bits/stdc++.h>
using namespace std;
//Scope of variables
// Global x
int x = 23;

int main()
{
// Local x
int x = 10;
cout << "Value of global x is " << ::x;
cout<< "\nValue of local x is " << x;
return 0;
}