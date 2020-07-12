#include <iostream>
#include <set>
#include <math.h>


typedef long long ll;

#define sc(x) scanf("%d", &x);
#define scll(x) scanf("%lld", &x);

#define pf(x) printf("%d\n", x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	ll n;
	scll(n);

	ll ans(0);

	set<ll> zion;

	for (int i = 0; i < 2 * n ; i++)
	{ 
		ll x;
		scll(x);

		if (zion.count(x) == 0)
			zion.insert(x);
		
		else
			zion.erase(x);

		ll k = zion.size();

		ans = max(ans, k);
	}

	zion.clear();

	pfll(ans);

	return 0;
}