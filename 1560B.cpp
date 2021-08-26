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
	
	ll a, b, c; cin >> a >> b >> c;

	if ((c > 2 * abs(b - a)) or (a > 2 * abs(a - b)) or (b > 2 * abs(b - a)))
	{
		cout << "-1\n";
		return;
	}

	ans = (c + abs(b - a));
	cnt = (c - abs(b - a));

	if (ans > 2 * abs(b - a))
		ans = cnt;

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