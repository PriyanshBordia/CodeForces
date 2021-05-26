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
	
	ll ans(0), sum(0), cnt(0), mx(0), mn(1e18);
	
	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	sort(a, a + n);

	mx = a[n - 1], cnt = n;
	for (ll i = 0; i < n - 1; i++)
	{
		if ((abs(a[i] - a[i + 1]) >= mx) and (abs(mx - a[i]) >= mx))
			break;

		else
			cnt--;
	}

	mn = a[0], ans = n;
	for (ll i = n - 1; i > 0; i--)
	{
		if ((abs(a[i] - a[i - 1]) >= a[i]) and (abs(mn - a[i]) >= a[i]))
			break;

		else
			ans--;
	}
	
	pfll(max(ans, cnt));

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}