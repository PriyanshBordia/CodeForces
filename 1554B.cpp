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
	
	ll ans(INT_MIN), sum(0), cnt[100005], mx(-1), mn(1e18);
	
	ll n, k; cin >> n >> k;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < 100005; i++)
		cnt[i] = 0;

	vector< vector<int> > v(100005);

	for (int i = 0; i < n; i++)
	{
		cnt[a[i]]++;
		v[a[i]].push_back(i + 1);
	}

	for (int i = 0; i < n; i++)
	{
		if (cnt[a[i]] >= 2)
		{
			int x = v[a[i]].size();
			ans = max(ans, v[a[i]][x - 1] * v[a[i]][x - 2] - k * a[i]);
		}

		else
		{
			for (int j = n - 1; j > i; j--)
			{
				ans = max(ans, ((i + 1) * (j + 1)) - k * (a[i] | a[j]));
				// cout << ((i + 1) * (j + 1)) - k * (a[i] | a[j]) << endl;
			}
			// cout << endl;
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