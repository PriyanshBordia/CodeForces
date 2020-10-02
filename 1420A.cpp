#include <iostream>
#include <math.h>
#include <algorithm>

typedef long long ll;

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll n; cin >> n;

	ll a[n], b[n]; for (int i = 0; i < n; i++) { cin >> a[i]; b[i] = a[i]; }

	ll mx = n * (n - 1) / 2 - 1;

	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] <= a[i + 1])
		{
			yes; 
			return;
		}
	}

	no;

	return;
}

int main()
{
	ll t; cin >> t;

	while (t--)
		solve();

	return 0;
}