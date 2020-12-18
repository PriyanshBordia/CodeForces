#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef signed long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1e09), mn(1e18);
	
	ll a, b, c; cin >> a >> b >> c;

	ll z = (a + b + c) / 7;


	if (a == 0 || b == 0 || c == 0)
		no;

	else if ((a >= z && b >= z && c >= z) && ((a + b  + c) - (3 * z)) % 6 == 0 && z > 0)
		yes;
	
	else
		no;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
