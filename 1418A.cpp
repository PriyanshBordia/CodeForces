#include <iostream>
#include <algorithm>
#include <math.h>

typedef unsigned long long ll;

using namespace std;

void solve()
{
	ll x, y, k; cin >> x >> y >> k;

	ll total_sticks = k * (y + 1);

	ll cnt = (total_sticks - 1) / (x - 1);

	if ((total_sticks - 1) % (x - 1) != 0)
		cnt++;

	cout << cnt + k << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}
