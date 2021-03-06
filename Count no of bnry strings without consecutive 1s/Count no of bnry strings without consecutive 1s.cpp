// Count no of bnry strings without consecutive 1s.cpp : Defines the entry point for the console application.
//

#include <iostream>
using namespace std;
#include <vector>


using namespace std;
int countStrings(int n)
{
	int a[n], b[n];
	a[0] = b[0] = 1;
	for (int i = 1; i < n; i++)
	{
		a[i] = a[i - 1] + b[i - 1];
		b[i] = a[i - 1];
	}
	return a[n - 1] + b[n - 1];
}


int main()
{
	cout << countStrings(5) << endl;
	return 0;
}
