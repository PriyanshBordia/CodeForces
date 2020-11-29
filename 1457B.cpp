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
	
	ll ans(100000000000), sum(0), cnt[101], mx(0), mn(1000000000);
	
	for (int i =0; i< 101;i++)
		cnt[i] = 0;

	ll n, k; cin >> n >> k;

	ll a[n + 1]; 
	for (int i = 1; i <= n; i++) 
	{
		cin >> a[i];

		cnt[a[i]] += 1;
	}

	for (ll i = 1; i < 101; i++)
	{
		if (cnt[i] > 0)
		{
			// cout << i << endl;

			sum = 0, mx = 0;
			for (int j = 1; j <= n; j++)
			{
				if (a[j] != i)
				{
					// cout << j <<  " ";
					j += k - 1;
					mx++;
				}

				else
				{
					// cout << sum << " " << endl;
					// mx += sum;
					// sum = 0;
				}
			}

			// mx += ceil(sum * 1.0 / k);
			ans = min(ans, mx);
			// cout << ans << endl << endl;	
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
