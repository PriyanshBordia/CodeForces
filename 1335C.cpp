#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

void solve()
{
	int n; cin >> n;

	int a[n + 1]; 
	for (int i = 0; i <= n; ++i) a[i] = 0;

	for (int i = 0; i < n; i++) {int x; cin >> x; a[x]++; }

	int mx = *max_element(a, a + n + 1);

	int cnt = n + 1 - count(a, a + n + 1, 0);
	
	int ans = max(min(cnt - 1, mx), min(mx - 1, cnt));

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