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
	ll n; cin >> n;

	ll a[n + 1]; for (ll i = 1; i <= n; i++) cin >> a[i];

	if ((a[2] + a[1]) <= a[n] || (a[1] + a[n]) <= a[2] || a[2] + a[n] <= a[1])
	{
		cout << "1 2 " << n << endl;
	}

	else 
		cout << "-1\n";

	// for (ll i = 1; i <= n - 2; i++)
	// {
	// 	if ((a[i] + a[i + 1]) <= a[i + 2] || (a[i + 2] + a[i + 1]) <= a[i] || a[i] + a[i + 2] <= a[i + 1])
	// 	{
	// 		cout << i << " " << i + 1 << " " << i + 2 << endl;
	// 		return;
	// 	}
	// }

	// ll ans(-1);

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
