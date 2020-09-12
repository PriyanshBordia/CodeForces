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

	ll ans = a[5] * a[1] * a[2] * a[3] * a[4];

	ll i = a[1], j = a[2], k = a[3], l = a[4], t = a[5];

	int p = 6;

	while (p <= n)
	{
		ll ans1 = ans, ans2 = ans, ans3 = ans, ans4 = ans, ans5 = ans;

		if (i != 0 && (ans < a[p] * (ans / i)))
		{
			ans1 = a[p] * (ans / i);	
			i = a[p];
		}
		
		if (j != 0 && (ans < (a[p] * (ans / j))))
		{
			ans2 = a[p] * (ans / j);	
			j = a[p];
		}

		if (k != 0 && (ans < (a[p] * (ans / k))))
		{
			ans3 = a[p] * (ans / k);	
			k = a[p];
		}

		if (l != 0 && (ans < (a[p] * (ans / l))))
		{
			ans4 = a[p] * (ans / l);	
			l = a[p];
		}

		if (t != 0 && (ans < (a[p] * (ans / t))))
		{			
			ans5 = a[p] * (ans / t);	
			t = a[p];
		}

		ans = max(ans, max(ans1, max(ans2, max(ans3, max(ans4, ans5)))));

		p++;
	}
	
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