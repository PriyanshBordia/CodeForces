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

	int a[n + 1][m + 1] = { 0 };
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
			a[i][j] = ((i == x && j == y) ? 1 : 0);
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if ()
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
