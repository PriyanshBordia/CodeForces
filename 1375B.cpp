#include <iostream>

typedef long long ll;

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	int n, m; cin >> n >> m;

	ll a[n][m];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			a[i][j]
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; j++)
		{
			int k = a[i][j];

			if (k <= 4)
			{
				int cnt(0);

				if (i + 1 < n && a[i + 1][j] > 0)
					cnt++;

				if (i - 1 >= 0 && a[i - 1][j] > 0)
					cnt++;
				
				if (j + 1 < m && a[i][j + 1] > 0)
					cnt++;
				
				if (j - 1 >= 0 && a[i][j - 1] > 0)
					cnt++;

				if (cnt != k)
				{
					no;
					return;
				}
			}

			else
			{
				no;
				return;
			}
		}
	}

	yes;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();
	
	return 0;
}