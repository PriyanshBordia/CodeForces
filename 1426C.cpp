#include <iostream>
#include <math.h>
#include <algorithm>

typedef long long ll;

using namespace std;

void solve()
{
	int n; cin >> n;

	int ans(1e09);
	for (int i = 1; i * i <= n; i++)
	{
		ans = min(ans, i - 1 + (n - 1) / i);
	}

	cout << ans << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}
