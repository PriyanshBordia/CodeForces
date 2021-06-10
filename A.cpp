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
	
	ll ans(0), sum(0), cnt(0), mx(1), mn(1);
	
	ll n; cin >> n;

	ll a[n + 1]; 
	for (int i = 1; i <= n; i++) 
	{
		ll x; cin >> x;
		a[x] = i;
	}

	mn = a[1];
	mx = a[n];

	if (mx > mn)
		ans = min(mx, n - mn + 1);
	else
		ans = min(mn, n - mx + 1);
	
	if (mn <= n / 2 && mx <= n / 2)
		ans = max(mx, mn);

	else if (mn > n / 2 && mx > n / 2)
		ans = max(n - mx, n - mn) + 1;

	else if (mn <= n / 2 && mx > n / 2)
		ans = min(mn + n - mx + 1, min(mx, n - mn + 1));

	else
		ans = min(n - mn + mx + 1, min(mn, n - mx + 1));
	
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