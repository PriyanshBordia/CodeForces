#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

void solve()
{
	ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;

	ll ans(abs(x1 - x2) + abs(y1 - y2));

	if (x1 != x2 && y1 != y2)
		ans += 2;

	cout << ans << endl;

	return;
}

int main()
{
	ll t = 1; cin >> t;

	while (t--)
		solve();

	return 0;
}