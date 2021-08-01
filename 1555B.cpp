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
	
	double ans(0);

	double W, H; cin >> W >> H;

	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	double w, h; cin >> w >> h;

	double y = y2 - y1, x = x2 - x1;

	if ((x + w) > W and (y + h) > H)
	{
		cout << -1 << endl;
		return;
	}

	// if ((x + w) < W)
	// 	ans = 

	// else
	{
		ans = sqrt(pow(min(h - y1, y1), 2) + pow(min(w - x1, x1), 2));
	}

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