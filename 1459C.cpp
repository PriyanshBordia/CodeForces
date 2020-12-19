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

ll gcd(ll a, ll b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(1), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	ll n, m; cin >> n >> m;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];
	ll b[m]; for (int i = 0; i < m; i++) cin >> b[i];

	sort(a, a + n);
	
	// for (ll i = 1; i <= m; i++)
	// {
	// 	ans = b[i] + a[1];
	// 	for (int j = 1; j <= n; j++)
	// 	{
	// 		ans = gcd(b[i] + a[j], ans);
	// 	}

	// 	cout << ans << " ";
	// }

	// cout << endl;
	
	if (n == 1)
	{
		for (int i = 0; i < m; i++)
		{
			cout << a[0] + b[i] << " ";
		}
	}

	else
	{
		ans = a[1] - a[0];
		for (int i = 1; i < n; i++)
		{
			ans = gcd(ans, a[i] - a[i - 1]);
		}

		for (int i = 0; i < m; i++)
		{
			cout << gcd(ans, a[0] + b[i]) << " ";
		}
	}

	
	
	cout << endl;

	return;
}

int main()
{
	ll t = 1; //scll(t);
	
	while (t--)
		solve();

	return 0;
}
