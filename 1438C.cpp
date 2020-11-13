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
	vector<ll> v;	set<ll> st;	map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	ll n, m; cin >> n >> m;

	ll a[n][m], b[n][m]; 
	for (int i = 0; i < n; i++) 
	{	
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}

	for (int i = 0; i < n; i++) 
	{	
		for (int j = 0; j < m; j++)
		{
			if (i - 1 >= 0 && a[i - 1][j] == a[i][j])
			{
				if (a[i - 1][j] == b[i - 1][j])
				{
					a[i - 1][j] += 1; b[i - 1][j] += 1;
				}

				else 
				{
					a[i][j] += 1; b[i][j] += 1;
				}
			}

			if (j - 1 >= 0 && a[i][j - 1] == a[i][j])
			{
				if (a[i][j - 1] == b[i][j - 1])
				{
					a[i][j - 1] += 1; b[i][j - 1] += 1;
				}

				else 
				{
					a[i][j] += 1; b[i][j] += 1;
				}
			}

			if (i + 1 < n && a[i + 1][j] == a[i][j])
			{
				if (a[i + 1][j] == b[i + 1][j])
				{
					a[i + 1][j] += 1; b[i + 1][j] += 1;
				}

				else 
				{
					a[i][j] += 1; b[i][j] += 1;
				}
			}

			if (j + 1 < m && a[i][j + 1] == a[i][j])
			{
				if (a[i][j + 1] == b[i][j + 1])
				{
					a[i][j + 1] += 1; b[i][j + 1] += 1;
				}

				else
				{ 
					a[i][j] += 1; b[i][j] += 1;
				}
			}
		}
	}

	for (int i = 0; i < n; i++) 
	{	
		for (int j = 0; j < m; j++)
			cout << b[i][j] << " ";

		cout << endl;
	}

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}