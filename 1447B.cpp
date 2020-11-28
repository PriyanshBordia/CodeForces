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
#define pb(x) push_back(x)

using namespace std;

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	int n, m; cin >> n >> m;

	int a[n][m]; 
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
			cin >> a[i][j];
	}

	for (ll i = 0; i <= n; i++)
	{	
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] < 0)
			{
				// if (j - 1 >= 0 && (abs(a[i][j - 1]) <= abs(a[i][j])))
				// {
				// 	a[i][j - 1] *= -1; a[i][j] *= -1;
				// }

				if (j + 1 < m && (abs(a[i][j + 1]) <= abs(a[i][j])))
				{
					a[i][j + 1] *= -1; a[i][j] *= -1;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
		{
			ans += a[i][j];
		} 
	}
	
	
	pfll(ans);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
