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
	
	ll ans(0), sum(0), cnt(0), mx(0), mn(0);
	
	ll n, x; cin >> n >> x;

	ll a[n + 1]; for (int i = 1; i <= n; i++) cin >> a[i];

	for (ll i = 1; i <= n; i++)
	{
		sum += a[i] / x;
		ans += a[i];

		if ((a[i] % x) != 0)
		{
			cnt++;
		}
	}

	mx = cnt + sum;
	mn = ceil(ans * 1.0 / x);

	cout << mn << " " << mx << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
