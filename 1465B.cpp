#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef unsigned long long ll;
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

	ll t; cin >> t;

	for (ll i = t; i <= 10 * t; ++i)
	{
		string r = to_string(i); 
		int flag = 0;
		for (int j = 0; j < r.size(); ++j)
		{
			if (r[j] != '0' && r[j] != '1')
			{
				if (i % ll(r[j] - '0') != 0)
				{
					flag = 1;		
					break;
				}
			}
		}

		if (!flag)
		{
			cout << r << endl;
			return;
		}
	}

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
