#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
	int n, k; cin >> n >> k;

	int t[k + 1]; for (int i = 1; i <= k; i++) cin >> t[i];

	int ans(t[1]);
	for (int i = 2; i <= k; ++i)
	{
		ans = max(ans, (t[i] - t[i - 1]) / 2 + 1);
	}

	ans = max(ans, n - t[k] + 1);

	cout << ans << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}