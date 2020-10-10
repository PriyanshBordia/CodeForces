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
	ll n, m, x, y; cin >> n >> m >> x >> y;

	int a[n + 1][m + 1];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			a[i][j] = 0;
		}
	}

	for (int i = 1; i <= n * m; i++)
	{
		cout << x << " " << y << endl;
			
		a[x][y] = 1;
		
		int flag(0);
		for (int j = 1; j <= n; j++)
		{
			if (a[j][y] == 0)
			{
				x = j; flag = 1;
				break;
			}
		}

		if (!flag)
		{
			for (int j = 1; j <= m; j++)
			{
				if (a[x][j] == 0)
				{
					y = j;
					break;
				}
			}	
		}		
	}

	return;
}

int main()
{
	ll t = 1; //scll(t);
	
	while (t--)
		solve();

	return 0;
}
