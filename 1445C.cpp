#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
#include <time.h>

typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

void solve()
{
	vector<ll> v;	set<ll> st;	map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	ll p, q; cin >> p >> q;

	if (p % q != 0)
		ans = p;

	else
	{	
		ll j = 1;
		while (ans >= 1)
		{	
			if (ans % q != 0)
			{
				ans = p * j;
				break;
			}

			j++; 
			if (p % )ans = p / j;

			pfll(ans);
		}
	}

	pfll(ans);

	return;
}

int main()
{
	clock_t start = clock();

	ll t = 1; scll(t);
	
	while (t--)
		solve();

	clock_t end = clock();

	// cout << double(end - start) / CLOCKS_PER_SEC << endl;

	return 0;
}
