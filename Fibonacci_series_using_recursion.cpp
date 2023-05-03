#include <iostream>
using namespace std;

int fib(int n)
{
	if (n < 2)
		return n;

	else
		return (fib(n - 1) + fib(n - 2));
}

int main()
{
	int n;
	cin>>n;
	cout<<"Fibonacci series of numbers is: ";

	for (int i = 0; i < n; i++)
	{
		cout<<fib(i)<<" ";
	}
	return 0;
}
