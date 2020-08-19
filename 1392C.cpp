#include <iostream>
#include <algorithm>

typedef unsigned long long ll;

using namespace std;

void solve()
{
	ll n; cin >> n;
	
	ll a[n]; for (ll i = 0; i < n; i++) cin >> a[i];

	ll i(1), cnt(0);

	while (i < n)
	{
		if (a[i] >= a[i - 1])
			i++;

		else
		{
			ll t = i - 1;
			ll k = i + 1, ans(a[i]);

			while ((k < n) && (a[k] < a[t]))
			{
				ans = min(a[k], ans);
				k++;
			}
			
			cnt += (a[t] - ans);

			i = k;
		}
	}

	cout << cnt << endl;

	return;
}

int main()
{
	ll t; cin >> t;
	
	while (t--)
		solve();

	return 0;
}