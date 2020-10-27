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
	set<ll> v;

	ll ans(100000000000000), sum(0), cnt(0), mx(0), mn(100000000);
	
	ll s[6]; for (int i = 0; i < 6; ++i) cin >> s[i];

	// sort(s, s + 6);

	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	// sort(a, a + n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			v.insert(a[i] - s[j]);
		}
	}

	for (int p = 0; p < v.size(); p++)
		{
			cout << v[p]<< " ";
		}

	for (int k = 0; k < v.size(); k++)
	{
		for (int p = k + 1; p < v.size(); p++)
		{
			// if (v[p] != v[k])
			ans = min(ans, v[p] - v[k]);
		}
	}

	pfll(ans);

	return;
}

int main()
{
	ll t = 1;
	
	while (t--)
		solve();

	return 0;
}

