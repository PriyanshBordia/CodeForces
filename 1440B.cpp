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
	
	ll n, k; cin >> n >> k;

	ll a[n * k + 1]; for (int i = 1; i <= n * k; i++) cin >> a[i];

	mn = ceil(n * 1.0 / 2);

	
	for (ll i = k * (mn - 1) + 1; i <= n * k; i += (n - mn + 1))
	{
		sum += a[i];
	}

	pfll(sum);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}