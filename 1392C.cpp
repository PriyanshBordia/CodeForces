#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef unsigned long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

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

			while (a[k] < a[t] && k < n)
			{
				ans = min(a[k], ans);
				// a[k] += 1;
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
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}