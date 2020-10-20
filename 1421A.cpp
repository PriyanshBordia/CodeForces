#include <iostream>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve()
{
	ll a, b; cin >> a >> b;

	ll ans = (a ^ min(a, b)) + (b ^ min(a, b));

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