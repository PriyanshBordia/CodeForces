#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

void solve()
{
	// vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n, m; cin >> n >> m;

	int relations[n], gPower[n];
	for (int i = 0; i < n; i++)
	{
		relations[i] = 0;
		gPower[i] = 0;
	}

	int f[m][2]; 
	for (int i = 0; i < m; i++) 
	{
		cin >> f[i][0] >> f[i][1];

		relations[f[i][0]]++;
		relations[f[i][1]]++;

		if (f[i][0] > f[i][1])
			gPower[f[i][1]]++;
		else 
			gPower[f[i][0]]++;
	}

	for (int i = 0; i < n; i++)
	{
		if (relations[i] > 0 and relations[i] == gPower[i])
		{
			relations[i] = -1;
			gPower[i] = -1;
		}
	}
	
	vectorn<pair<ll, ll> v;
	
	ll q; cin >> q;
	while (q--)
	{
		int x; cin >> x;

		if (x == 1)
		{
			int u, v; cin >> u >> v;
			relations[u]++;
			relations[v]++;
			
			if (u > v)
				gPower[u]++;
			else 
				gPower[v]++;

			if (relations[u] > 0 and relations[u] == gPower[u])
			{
				gPower[u] = 0;

				for (int i = 0; i < relations.size(); i++)
				{

				}
			}
		}

		else if (x == 2)
		{
			int u, v; cin >> u >> v;

			for (int i = 0; i < n; i++)
			{

			}

			relations[u]--;
			relations[v]--;

			if (relations[u] <= 0)

		}

		else if (x == 3)
		{
			cout << ans << endl;
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