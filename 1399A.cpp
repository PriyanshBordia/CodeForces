#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
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
	
	vector<ll> a(n); for (int i = 0; i < n; i++) { cin >> a[i]; }

	sort(a.begin(), a.end());

	for (int i = 1; i < n; ++i)
	{
		if (a[i] - a[i - 1] > 1)
		{
			no;
			return;
		}
	}

	yes;

	return;
}

int main()
{
	ll t; scll(t);
	
	while (t--)
		solve();

	return 0;
}

