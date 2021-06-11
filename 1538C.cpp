#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
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
	
	ll ans(0), sum(0), cnt(0);
	
	ll n, l, r; cin >> n >> l >> r;

	ll mx[n], mn[n];
	for (int i = 0; i < n; i++) 
	{
		ll x; cin >> x;

		if (x < r)
			v.push_back(x);
		
		// if (v[i] < r)
		// {
		// 	mn[i] = max(0, l - v[i]);
		// 	mx[i] = max(0, r - v[i]);
		// }
	}

	pfll(cnt);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}