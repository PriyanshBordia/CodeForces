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

bool isPowerof2(int n)
{
	while (n != 0)
	{
		if (n & 1)
			return false;

		n /= 2;
	}

	return true;
}

void solve()
{	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	if (isPowerof2(n))
		ans = n - 1;

	else
	{
		cnt = log(n) / log(2);
		ans = pow(2, cnt) - 1;
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