#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>

#include <vector>
#include <map>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	ll n, m; cin >> n >> m;
	
	char a[n][m];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}

	ll cnt(0);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == n - 1 && a[i][j] == 'D')
				cnt++;

			else if (j == m - 1 && a[i][j] == 'R')
				cnt++;
		}
	}

	cout << cnt << endl;

	return;
}

int main()
{
	ll t; cin >> t;
	
	while (t--)
		solve();

	return 0;
}