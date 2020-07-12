#include <iostream>
#include <algorithm>

#define sc(x) scanf("%d", &x);

using namespace std;

int main()
{
	int n, s;
	sc(n);
	sc(s);

	int sum = 0;
	int M = 0;

	int a[n];
	for (int i = 0; i < n; i++)
	{ 
		sc(a[i]); 

		sum += a[i];

		if (a[i] > M)
			M = a[i];
	}


	((sum - M) <= s) ? cout << "YES" << endl : cout << "NO" << endl;

	return 0;
}
