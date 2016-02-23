#include <iostream>

using namespace std;

//递归
int fib_recursive(int n)
{
	if (n < 2)
		return n;
	return fib_recursive(n - 1) + fib_recursive(n-2);
}

//非递归

int fib_loop(int n)
{
	if (n < 2)
		return n;
	int *a = new int[n+1];
	a[0] = 0;
	a[1] = 1;
	for (int i = 2; i < n + 1; ++i)
	{
		a[i] = a[i - 1] + a[i - 2];
	}
		
	return a[n];
 }
int main()
{
	//cout << fib_recursive(2) << endl;
	cout << fib_loop(3)<<endl;
	return 0;
}
