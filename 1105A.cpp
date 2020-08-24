#include <iostream>
#include <math.h>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
	int n; cin >> n;
	
	int a[n]; for (int i = 0; i < n; i++)  cin >> a[i];
	
	int k(0), ans(100000);
	for (int t = 1; t <= 100; t++)
	{
		int sum (0);

		for (int i = 0; i < n; i++)
			sum += min(abs(a[i] - t - 1), min(abs(a[i] - t + 1), abs(a[i] - t)));

		if (sum < ans)
		{
			ans = sum;
			k = t;		
		}
	}
	
	cout << k << " " << ans << endl;

	return 0;
}