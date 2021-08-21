#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
typedef long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

bool isPerfectSquare(long double x)
{
	long double sr = sqrt(x);

	return (sr - floor(sr) == 0);
} 


void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;
	
	if (isPerfectSquare(n))
	{
		cout << sqrt(n) << " " << "1" << endl;
		return;
	}

	ans = ceil(sqrt(n) * 1.0);

	cnt = pow(ans, 2) - pow(floor(sqrt(n) * 1.0), 2);

	sum = pow(ans, 2) - cnt / 2;

	ll r = 1, c = 1;

	if (n < sum)
	{
		r =  ans - (sum - n);
		c = ans;
	}

	else
	{
		r = ans;
		c = ans - (n - sum);
	}

	// cout << sum << endl;
	
	cout << r << " " << c << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}