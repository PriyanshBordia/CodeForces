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

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	for (ll i = 2; i <= n; i++)
	{
		if (a[i] != a[i - 1] && a[i - 1] != -1)
		{
			a[i] += a[i - 1];
			a[i - 1] = -1;
			cnt++;
		}

		else if (a[i] != a[i + 1]&& a[i - 1] != -1)
	}
	

	pfll(ans);

	return;
}

int main()
{
	ll t; cin >> t;
	
	while(t--)
		solve();
}