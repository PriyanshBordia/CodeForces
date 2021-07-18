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
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll h, w; cin >> h >> w;

	int arr[h][w];

	for (ll i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			arr[i][j] = 0;
		}
	}

	for (int j = 0; j < w; j += 2)
	{
		arr[0][j] = 1;
		arr[h - 1][j] = 1;
	}

	for (int i = 2; i < h; i += 2)
	{
		if (i + 2 < h)
		{
			arr[i][0] = 1;
			arr[i][w - 1] = 1;
		}

	}

	for (ll i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}

	cout << endl;
	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}