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
	ll ans(0), cnt(0), mx(0), mn(100000000);

	ll a, b, c; cin >> a >> b >> c;

	if (a == b && b == c) ans = a;

	else if (a == b) ans = c;

	else if (b == c) ans = a;

	else if (a == c) ans = b;

	else
	{	
		mx = max(a, max(b, c));
		mn = min(a, min(b, c));

		if (a > mn && a < mx)
			ans = a;

		else if (b > mn && b < mx)
			ans = b;

		else
			ans = c;

		ans = ceil(sqrt(pow(mn, 2) + pow(mx - ans, 2)));

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