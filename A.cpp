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

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll a, b, c, d; cin >> a >> b >> c >> d;

	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);

	sort(v.begin(), v.end());

	if ((v[2] == a && v[3] == b) || (v[2] == b && v[3] == a))
		no;

	else if ((v[2] == c && v[3] == d) || (v[2] == d && v[3] == c))
		no;
	
	else
		yes;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}