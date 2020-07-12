#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int x = 0;

		long long n, k;
		cin >> n >> k;

		long long a[n];
		for (int i = 0; i < n; i++){ cin >> a[i]; }

		long long moves = 0;
		
		long long b[n] = { 0 };
		for (int i = 0; i < n; i++)
		{
			if (a[i] >= k)
				b[i] = a[i] % k + k;
			
			else
				b[i] = a[i] % k;
		}

		sort(b, b + n);
		
		for (int i = 1; i < n; i++)
		{
			b[i] -= b[i - 1];
			moves += b[i];	
		}

		cout << moves << endl;
	}
	
	return 0;
}