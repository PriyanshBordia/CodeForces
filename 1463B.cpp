#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	ll n; cin >> n;

	ll a[n + 1]; for (int i = 1; i <= n; i++) { cin >> a[i]; sum += a[i]; }

	for (int i = 1; i <= n; ++i)
	{
		cnt = 0;
		for (int j = 1; j <= n; j++)
		{
			cnt += 2 * abs(a[j] - a[i]);
		}	

		if (cnt <= sum)
		{
			for (int k = 1; k <= n; ++k)
			{
				cout << a[i] << " ";
			}

			cout << endl; // << sum << " " << cnt << endl;
			return;
		}
	}


	for (int k = 1; k <= n; ++k)
	{
		cout << a[k] << " ";
	}

	cout << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
