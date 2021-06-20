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
	vector<ll> a;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n, k, x; cin >> n >> k >> x;

	for (int i = 0; i < n; i++) 
	{
		ll z; cin >> z;
		a.push_back(z);
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < a.size(); i++)
	{
		if (i - 1 >= 0 and (a[i] - a[i - 1]) > x)
		{
			// cout << i << " : " << a[i] << endl;

			if (k > 0 and ceil((a[i] - a[i - 1]) / 2.0) <= x and (a[i] - a[i - 1]) / x <= k)
			{
				a.insert(a.begin() + i, a[i - 1] + x);

				k--; i--;
			}

			else
				cnt++;
		}
	}

	// for (int i = 0; i < a.size(); i++)
	// 	cout << a[i] << " ";
	// cout << endl;

	pfll(cnt + 1);

	return;
}

int main()
{
	ll t = 1; //scll(t);
	
	while (t--)
		solve();

	return 0;
}