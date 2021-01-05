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
	
	ll n; cin >> n;

	ll a[n + 1]; for (int i = 1; i <= n; i++) cin >> a[i];

	a[n] += 1;
	for (ll i = n; i > 0; i--)
	{
		if (i + 1 <= n && a[i + 1] != (a[i] + 1) && a[i + 1] != a[i])
			a[i] += 1;

		st.insert(a[i]);
	}
	
	ans = st.size();

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