#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve()
{
	ll n, k; cin >> n >> k;

	ll a[n]; for (int i = 0; i < n; i++){ cin >> a[i]; }

	ll moves[k + 1]; for (int i = 0; i <= k; i++) moves[i] = 0;

	for (int i = 0; i < n; i++) moves[k - (a[i] % k)]++;

	ll mx(0), key(0);
	for (int i = 1; i < k; i++)
	{
		if (moves[i] > mx)
		{
			mx = moves[i];
			key = k - i % k;
		}
	}

	cout << k * (mx - 1) + key + 1 << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();
	
	return 0;
}