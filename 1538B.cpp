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
	
	ll ans(0), sum(0), cnt(0), mx(0), mn(1e18);
	
	ll n; cin >> n;

	ll a[n + 1]; 
	for (int i = 1; i <= n; i++) 
	{
		cin >> a[i];
		sum += a[i];
	}

	if (sum % n != 0)
		ans = -1;	

	else
	{
		int f = sum / n;
		for (int i = 1; i <= n; i++)
		{
			if (a[i] > f)
				ans++;
		}

		// ans = min(ans, n - cnt);		
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