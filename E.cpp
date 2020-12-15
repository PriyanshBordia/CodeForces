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
	
	ll ans(0), sum(0), cnt(0), mx(2), mn(1000000000);
	
	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	sort (a, a + n);

	for (int i = 0; i < n - 2; i++)
	{
		// cout << a[i] << " ";
		for (int k = mx; k < n; k++)
		{
			// cout << a[k] << " " ;
			mx = k;

			if ((a[k] - a[i]) <= 2)
				cnt++;

			else
				break;			
		}

		// cout << cnt << endl;

		ans += (cnt * (cnt + 1) / 2); 
		cnt = 0;
	}

	pfll(ans);

	return;
}

// 1 1 2 2 3 4 5 6 8 9 

// 6 + 0 + 1 + 1 + 1 

int main()
{
	ll t; cin >> t;
	
	while(t--)
		solve();
}