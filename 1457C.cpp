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
	
	ll ans(1100000000), cnt(0), mx(-1), mn(1000000000);
	
	ll n, p, k; cin >> n >> p >> k;
	
	string s; cin >> s;

	s = '0' + s;
	ll x, y; cin >> x >> y;

	for (int i = p; i < k * p && i < (s.size() - p); i++)
	{
		ll sum = 0;
		for (int j = i; j < s.size(); j += k)
		{
			if (s[j] == '0')
			{
				sum += x;
			}
		}

		sum += y * (i - p);

		ans = min(ans, sum);
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
