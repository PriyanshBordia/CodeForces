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
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(-1), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	ll a[n][5]; 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 5; j++)
			cin >> a[i][j];
	}

	int p[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			p[i][j] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cnt = 0;
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < 5; k++)
			{
				if (a[i][k] < a[j][k])
					p[i][j]++;
			}

			if (p[i][j] >= 3)
				cnt++;
		}

		if (cnt == n - 1)
		{
			cout << i + 1 << endl;
			return;
		}
	}

	// for (int i = 0; i < n; i++)
	// {
	// 	cnt = 0;
	// 	for (int j = 0; j < n; j++)
	// 	{	
	// 		if (p[i][j] >= 3)
	// 			cnt++;
	// 	}

	// 	if (cnt == n - 1)
	// 	{
	// 		cout << i + 1 << endl;
	// 		return;
	// 	}
	// }

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