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

	sort(a, a + n);

	if (n == 2)
	{
		cout << a[0] << " " << a[1] << endl;
		return;
	}
	
	for (ll i = 0; i < n; i++)
	{
		if (i + 1 < n and (a[i + 1] - a[i]) < mn)
		{
			mn = a[i + 1] - a[i];
			sum = i + 1;
			cnt = i;
		}
	}

	for (int i = sum; i < n; i++)
		cout << a[i] << " ";

	for (int i = 0; i <= cnt; i++)
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