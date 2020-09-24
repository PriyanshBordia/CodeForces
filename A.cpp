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
	vector<ll> v;	set<ll> st;		map<ll, ll> m;

	ll ans(0), cnt(0), mx(0), mn(100000000);

	ll x, y, k; cin >> x >> y >> k;
	
	int i = 1;
	while (x < (k * (y + 1)))
	{
		x = pow(x, i);
		i++;
	}

	ans = i;
	
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
// 1 -> 2 -> 4 -> 8 -> 16