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
	
	ll n; cin >> n;

	ll a[n + 1]; 
	for (int i = 1; i <= n; i++) 
	{ 
		int x; cin >> x; 

		sum += x;
		ans = max(ans, sum); 
	}

	cnt = ans;
	
	ans = 0; sum = 0;

	ll m; cin >> m;
	
	ll b[m + 1]; 
	for (int i = 1; i <= m; i++) 
	{
		int x; cin >> x; 

		sum += x;
		ans = max(ans, sum);
	}
	
	
	cnt += ans; 
	pfll(cnt);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
