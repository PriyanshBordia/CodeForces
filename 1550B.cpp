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
	
	ll n, a, b; cin >> n >> a >> b;

	string s; cin >> s;

	ans = n * (a + b);

	vector<ll> zero;
	vector<ll> one;
	int r = 0, t = 0; 
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '0')
		{
			r++;
			if (t > 0)
				one.push_back(t);
			t = 0;
		}

		else if (s[i] == '1')
		{
			t++;
			if (r > 0)
				zero.push_back(r);
			r = 0;
		}
	}

	mx = a * n + b * min(one.size(), zero.size()) + b;

	ans  = max(ans, mx);

	sum = a * n + b * (one.size() + zero.size());

	pfll(max(sum, ans));

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}