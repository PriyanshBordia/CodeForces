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
	
	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	ll pos[n + 1]; cnt = n;
	for (int i = 0; i <= n; ++i)
		pos[i] = 0;

	for (ll i = 0; i < n; i++)
	{
		if (pos[a[i]] != 0)
		{
			cnt--;
			a[i] = -1;
		}

		pos[a[i]] = 1;
	}
	
	for (int i = 1; i <= n; i++)
	{
		if (pos[i] == 0)
			v.push_back(i);
	}
	
	cout << cnt << endl;

	vector<ll> ans;

	int j = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == -1)
		{
			if (v[j] == (i + 1))
			{
				v.push_back(v[j]);
				j++;
			}

			a[i] = v[j];
			j++;
		}

		ans.push_back(a[i]);
	}
	
	cout << a[i] << " ";

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