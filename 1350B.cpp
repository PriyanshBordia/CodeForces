#include <iostream>

using namespace std;

void solve()
{
	int n; cin >> n;

	int s[n + 1]; for (int i = 1; i <= n; i++) cin >> s[i];

	int ans(0);
	for (int i = 1; i <= n; i++)
	{
		int mx(0), cnt(0), index(i);
		for (int j = i; j <= n; j++)
		{
			if (mx < s[j] && j % index == 0)
			{
				mx = s[j];
				index = j;
				cnt++;

				cout << s[j] << " ";
			}
		}

		ans = max(ans, cnt);

		// cout << ans << endl;
	}

	cout << endl << ans << endl;

	return; 
}

int main()
{
	int t; cin >> t;

	while (t--) 
		solve();

	return 0;
}
