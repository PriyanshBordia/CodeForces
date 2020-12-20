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
		

	ll n, m; cin >> n >> m;

	ll ans(0), sum(0), cnt[n], mx(-1), mn(1000000000);
	for (int i = 0; i < n; ++i)
	{
		cnt[i] = 0;
	}

	ll x[m], y[m]; 
	for (int i = 0; i < m; i++) 
	{
		cin >> x[i] >> y[i];
	}

	for (int i = 0; i < m; i++) 
	{
		if (cnt[x[i]] == 0)
		{
			ans++;

			cnt[x[i]] = 1;
		}

		else
		{
			ans++;
			cnt[y[i]] = 1;
		}
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