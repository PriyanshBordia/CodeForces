#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
	int n; cin >> n;

	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	sort (a, a + n);
	
	int ans(10000);
	for (int i = 1; i < n; i++)
		ans = min(ans, abs(a[i] - a[i - 1]));

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