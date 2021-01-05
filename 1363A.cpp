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
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll a, b; cin >> a >> b;

	if (b % a != 0 && a % b != 0)
	{
		cout << "-1\n";
		return;
	}

	else if (a == b)
	{
		cout << "0\n";
		return;
	}

	if (b % a == 0)
		sum = b / a;

	else if (a % b == 0)
		sum = a / b;

	while (sum % 8 == 0)
	{
		sum /= 8;
		ans++;
	}

	while (sum % 4 == 0)
	{
		sum /= 4;
		ans++;
	}

	while (sum % 2 == 0)
	{
		sum /= 2;
		ans++;
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