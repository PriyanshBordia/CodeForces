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
	ll n; cin >> n;

	ll a[n + 1]; for (int i = 1; i <= n; i++) cin >> a[i];

	sort(a + 1, a + n + 1);

	ll ans = a[1] * a[2] * a[3] * a[4] * a[5];

	ll ans1 = a[1] * a[2] * a[n] * a[n - 1] * a[n - 2];

	ll ans2 = a[1] * a[2] * a[3] * a[4] * a[n];

	ll ans3 = a[n] * a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4];
	
	ans = max(ans, max(ans1, max(ans2, ans3)));
	
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