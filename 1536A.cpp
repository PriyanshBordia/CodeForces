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

	for (int i = 0; i < n; i++) 
	{
		ll a; cin >> a;
		v.push_back(a);

		mx = max(a, mx);

		if (a < 0)
		{
			cnt = -1;
		}
	}

	if (cnt == -1)
	{
		no;
			return;
	}

	yes;
	cout << mx + 1 << endl;
	for (int i = 0; i <= mx; i++)
		cout << i << " ";
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