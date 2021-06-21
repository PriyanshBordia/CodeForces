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
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n, k, x; cin >> n >> k >> x;

	ll a[n];
	for (int i = 0; i < n; i++) 
		cin >> a[i];

	sort(a, a + n);

	vector<ll> diff;
	for (int i = 1; i < n; i++)
	{
		if (a[i] - a[i - 1] > x)
		{
			diff.push_back(a[i] - a[i - 1]);
			cnt++;
		}
	}

	sort(diff.begin(), diff.end());

	for (int i = 0; i < diff.size(); i++)
	{
		ll d = diff[i] / x;

		if (diff[i] % x == 0)
			d--;

		if (d <= k)
		{
			k -= d;
			cnt--;
		}
	}

	pfll(cnt + 1);

	return;
}

int main()
{
	ll t = 1; //scll(t);
	
	while (t--)
		solve();

	return 0;
}