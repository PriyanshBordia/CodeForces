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
	ll ans(0), sum(0), cnt(0), mx(0), mn(100000000);
	
	ll n, m; cin >> n >> m;

	ll a[n][m]; 
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (ll i = 0; i < m; i++)
	{
		ll x[n]; 

		for (ll j = 0; j < n; j++) cin >> x[j];

		for (ll t = 0; t < n; t++)
		{
			for (int l = 0; l < n; ++l)
			{
					
	 			if (a[l][0] == x[t])
				{
					for (int k = 0; k < m; k++)
					{
						cout << a[l][k] << " ";
					}

					cout << endl;

					break;
				}
			}
		}
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
