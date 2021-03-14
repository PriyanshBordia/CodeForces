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
	
	ll ans(0), sum(0), cnt[101], mx(-1), mn(1e18);
	
	for (int i = 1; i <= 100; i++)
		cnt[i] = 0;

	ll n; cin >> n;

	for (int i = 1; i <= n; i++) { int a; cin >> a; cnt[a]++;}

	for (int i = 1; i <= 100; i++)
	{
		if (cnt[i] > 0)
		{
			ans = n - cnt[i];
			break;
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
