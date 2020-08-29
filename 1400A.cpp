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

using namespace std;

void solve()
{
	ll n; scll(n);

	string s; cin >> s;

	for (int i = 0; i < 2 * n; i += 2)
		cout << s[i];

	cout << endl;

	// ll a[n]; for (ll i = 0; i < n; i++){ scll(a[i]); }

	// ll ans(0);

	// pfll(ans);
	
	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}