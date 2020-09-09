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

	ll ans(0);

	ll cnt1[n + 1], cnt2[n + 1];

	cnt1[0] = 0; cnt2[0] = 0;

	for (int i = 1; i <= n; ++i)
	{
		cnt1[i] = 0;
		cnt1[i] += cnt1[i - 1] + a[i];
	}

	cnt2[n] = a[n];
	for (int j = n - 1; j > 0; j--)
	{
		cnt2[j] = 0;
		cnt2[j] += cnt2[j + 1] + a[j];
	}
	
	ans = *max_element(cnt2, cnt2 + n + 1);

	cout << ans << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
