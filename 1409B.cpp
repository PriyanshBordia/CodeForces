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
	ll a, b, x, y, n; cin >> a >> b >> x >> y >> n;

	ll ans(0), cnt(0), m(n);

	ll a2, a1, b2, b1;

	a2 = a1 = a; b2 = b1 = b;

	ll ans2(0), ans1(0);

// -> 
	cnt = max(x, a1 - n);

	n -= a1 - cnt;

	a1 = cnt;

	if (n > 0)
	{
		cnt = max(y, b1 - n);
		b1 = cnt;
	}

	ans1 = a1 * b1;

// ->
	cnt = max(y, b2 - m);

	m -= b2 - cnt;

	b2 = cnt;

	if (m > 0)
	{
		cnt = max(x, a2 - m);
		a2 = cnt;
	}

	ans2 = a2 * b2;

	ans = min (ans1, ans2);

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