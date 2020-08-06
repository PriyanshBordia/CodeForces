#include <iostream>
#include <algorithm>

using namespace std;

void solve()
{
	int n; cin >> n;

	int s[n + 1]; for (int i = 1; i <= n; i++) cin >> s[i];

	int ans[n + 1]; for (int i = 0; i <= n; i++) ans[i] = 1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 2 * i; j <= n; j += i)
		{
			if (s[i] < s[j])
				ans[j] = max(ans[i] + 1, ans[j]);
		}
	}

	cout << *max_element(ans + 1, ans + n + 1) << endl;

	return; 
}

int main()
{
	int t; cin >> t;

	while (t--) 
		solve();

	return 0;
}
