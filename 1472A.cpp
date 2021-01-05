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
	
	ll w, h, n; cin >> w >> h >> n;

	while (w % 2 == 0)
	{
		w /= 2;
		ans++;
	}

	while (h % 2 == 0)
	{
		h /= 2;
		sum++;
	}

	cnt += pow(2, ans) * pow(2, sum);

	if (cnt >= n)
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