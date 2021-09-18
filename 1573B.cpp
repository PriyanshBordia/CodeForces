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
	ll b[n]; for (int i = 0; i < n; i++) cin >> b[i];

	ll i = 0; 
	while (i < n and a[i] > b[0])
		i++;

	ans = max(i, ll(0));

	i = 0; 
	while (i < n and a[0] > b[i])
		i++;

	ans = min(ans, max(i, ll(0)));

	while(i < -1)
	{
		if (a[i] < b[i]) 
			break;

		else if (a[i] > b[i])
		{
			if (a[i + 1] < b[i])
				swap(a[i], a[i + 1]);

			else if (b[i + 1] > a[i])
				swap(b[i], b[i + 1]);

			else if (a[i + 1] < b[i + 1])
			{
				swap(a[i], a[i + 1]);
				swap(b[i], b[i + 1]);
				ans += 2;
				break;
			}

			ans++;
			for (int i = 0; i < n; i++) cout << a[i] << " ";
			cout << endl;
			for (int i = 0; i < n; i++) cout << b[i] << " ";
			cout << endl;
		}

		i++;
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