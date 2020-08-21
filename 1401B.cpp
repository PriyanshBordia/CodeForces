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

using namespace std;

void solve()
{
	ll x1, y1, z1; cin >> x1 >> y1 >> z1;

	ll x2, y2, z2; cin >> x2 >> y2 >> z2;

	ll ans = 2 * min (z1, y2);
	
	z1 -= min (z1, y2);;
	y2 -= min (z1, y2);
	
	z2 -= min(z2, z1);
	z1 -= min(z2, z1);

	z2 -= min(x1, z2);
	x2 -= min(x1, z2);

	ans -= z2 * 2;

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