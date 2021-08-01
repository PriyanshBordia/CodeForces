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
	
	ll ans(1e18), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	ans = 15 + max(ll(0), ll(ceil((n - 6) * 1.0 / 2) * 5));

	cout << ans << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}