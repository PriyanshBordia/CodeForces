#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
	int n, k; cin >> n >> k;

	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	sort (a, a + n);

	int i(1), cnt(0);
	while (i < n)
	{
		cnt += max(0, (k - a[i++]) / a[0]);
	}

	cout << cnt << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}