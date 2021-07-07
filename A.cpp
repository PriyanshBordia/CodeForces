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
	
	ll a, b; cin >> a >> b;

	if (a == b)
		cout << "0 0" << endl;

	else
	{
		ans = abs(a - b);
		cnt = min(min(a, b) % ans, max(a, b) % ans);
		cnt = min(cnt, (ans - min(a, b) % ans));
		cnt = min(cnt, (ans - max(a, b) % ans));
		cnt = min(cnt, min(a, b));

		if (ans == 1 or (ans == cnt))
			cnt = 0;

		cout << ans << " " << cnt << endl;
	}

	return;
}

/*
9 16 - 7
0 7 - 9
14 
7 14
*/
int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}