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
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	ll a[n + 1], b[n + 1]; for (int i = 1; i <= n; i++) { cin >> a[i]; b[i] = a[i]; }

	for (ll i = 2; i < n; i++)
	{	
		if (i - 1 >= 1 && a[i] > a[i - 1] && i + 1 <= n && a[i] > a[i + 1])
			cnt++;
			
		else if (i - 1 >= 1 && a[i] < a[i - 1] && i + 1 <= n && a[i] < a[i + 1])
			cnt++;

		else
			b[i] = -1;
	}

	cout << cnt + 2 << endl;

	for (ll i = 1; i <= n; i++)
	{
		if (b[i] != -1)
			cout << a[i] << " ";
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