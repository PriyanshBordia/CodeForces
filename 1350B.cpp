#include <iostream>

using namespace std;

void solve()
{
	int n; cin >> n;

	int s[n + 1]; for (int i = 1; i <= n; i++) cin >> s[i];

	int ans(0);
	for (int i = 1; i <= n; i++)
	{
		int mx(s[i]), cnt(1), index(i);
		for (int j = 2 * i; j <= n; j += i)
		{
			if (mx < s[j] && (j % index == 0))
			{
				mx = s[j];
				index = j;
				cnt++;
			}
		}

		if (s[1] < s[i] && i != 1)
			cnt++;

		ans = max(ans, cnt);
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
