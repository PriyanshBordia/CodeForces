#include <iostream>

typedef long long ll;

using namespace std;

void solve()
{
	ll n, k, z; cin >> n >> k >> z;

	ll ans(0), sum(0), mx(0); k++;

	ll a[n + 1]; for (int i = 1; i <= n; i++) { cin >> a[i]; }

	for (int i = 1; i <= k; i++) 
	{ 
		ans += a[i]; 
		mx = max(mx , a[i] + a[i + 1]);
		sum = max(sum, min((k - i) / 2, z) * mx + ans);
	}

	cout << sum << endl;

	return;
}

int main()
{
	ll t; cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}