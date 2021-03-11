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
	
	int x, y; cin >> x >> y;

	string s; cin >> s;

	int right = count(s.begin(), s.end(), 'R');
	int left = count(s.begin(), s.end(), 'L');
	int up = count(s.begin(), s.end(), 'U');
	int down = count(s.begin(), s.end(), 'D');

	if (x <= 0 && abs(x) <= left && y <= 0 && abs(y) <= down)
		yes;
	else if (x <= 0 && abs(x) <= left && y >= 0 && abs(y) <= up)
		yes;
	else if (x >= 0 && abs(x) <= right && y <= 0 && abs(y) <= down)
		yes;
	else if (x >= 0 && abs(x) <= right && y >= 0 && abs(y) <= up)
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
