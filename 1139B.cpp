#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int n; cin >> n;

	ll a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	int prev(a[n - 1]);

	ll ans(a[n - 1]);
	
	int i = n - 2;
	while (i >= 0)
	{
		if (prev > a[i])
		{
			ans += a[i];
			prev = a[i];
		}

		else if (prev == a[i])
		{
			ans += a[i] - 1;
			prev = a[i] - 1;
		}

		else
		{
			ans += max(0, prev - 1);
			prev -= 1;
		}

		i--;
	}

	cout << ans << endl;
	
	return 0;
}