#include <iostream>
#include <math.h>

using namespace std;

bool isPerfectSquare(long double x)
{
	long double sr = sqrt(x);

	return (sr - floor(sr) == 0);
} 

int main()
{
	int n; cin >> n;

	int a[n], mx(-1e06); 
	for (int i = 0; i < n; i++) 
	{
		cin >> a[i];

		if (a[i] > mx && !isPerfectSquare(a[i]))
			mx = a[i];
	}

	cout << mx << endl;

	return 0;
}