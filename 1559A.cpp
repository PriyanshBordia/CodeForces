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
	
	ll ans(INT_MAX), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	sort (a, a + n);

	ans = a[0];
	for (int i = 1; i < n; i++)
		ans = ans & a[i];

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