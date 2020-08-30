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
	ll n; cin >> n;
	
	ll sum(0);

	ll a[n]; for (ll i = 0; i < n; i++){ scll(a[i]);  sum += a[i]; }

	ll ans(100000000000);

	for (int i = 1; i <= 100000 - n; i++)
	{
		ll cnt = abs(pow(i, n) - sum - 1);

		ans = min(ans, cnt); 
	}

	cout << ans << endl;

	return;
}

int main()
{
	ll t = 1; //scll(t);
	
	while (t--)
		solve();

	return 0;
}