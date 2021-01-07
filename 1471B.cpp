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
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n, x; cin >> n >> x;

	for (int i = 0; i < n; i++) 
	{
		ll a; cin >> a;

		v.pb(a);
	}

	while (0 < v.size())
	{
		if (v[0] % x == 0)
		{
			ans += x * v[0];
			x * ()

			while (v[0] % x == 0)
			{
				ans += x * v[0];
				v[0] /= x;
			}

			v.erase(v.begin());
		}

		else 
			break;
	}

	for (int i = 0; i < v.size(); i++)
	{
		ans += v[i];
	}
	
	pfll(ans);
	
	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}