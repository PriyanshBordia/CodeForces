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
	
	ll n, m, i, j; cin >> n >> m >> i >> j;

	ll x1 = 1, y1 = 1;
	ll x2 = 1, y2 = m;
	ll x3 = n, y3 = 1;
	ll x4 = n, y4 = m;

	ll s1 = abs(i - x1) + abs(j - y1);
	ll s2 = abs(i - x2) + abs(j - y2);
	ll s3 = abs(i - x3) + abs(j - y3);
	ll s4 = abs(i - x4) + abs(j - y4);

	ans = max(max(s1, s2), max(s3, s4));


	if (s1 == ans)
	{
		cout << x1 << " " << y1 << " ";
		i = x1; j = y1;
		s1 = abs(i - x1) + abs(j - y1);
		s2 = abs(i - x2) + abs(j - y2);
		s3 = abs(i - x3) + abs(j - y3);
		s4 = abs(i - x4) + abs(j - y4);
		ans = max(s2, max(s3, s4));
	}

	else if (s2 == ans)
	{
		cout << x2 << " " << y2 << " ";
		i = x2; j = y2;
		s1 = abs(i - x1) + abs(j - y1);
		s2 = abs(i - x2) + abs(j - y2);
		s3 = abs(i - x3) + abs(j - y3);
		s4 = abs(i - x4) + abs(j - y4);
		ans = max(s1, max(s3, s4));
	}

	else if (s3 == ans)
	{
		cout << x3 << " " << y3 << " ";
		i = x3; j = y3;
		s1 = abs(i - x1) + abs(j - y1);
		s2 = abs(i - x2) + abs(j - y2);
		s3 = abs(i - x3) + abs(j - y3);
		s4 = abs(i - x4) + abs(j - y4);
		ans = max(s1, max(s2, s4));
	}

	else if (s4 == ans)
	{
		cout << x4 << " " << y4 << " ";
		i = x4; j = y4;
		s1 = abs(i - x1) + abs(j - y1);
		s2 = abs(i - x2) + abs(j - y2);
		s3 = abs(i - x3) + abs(j - y3);
		s4 = abs(i - x4) + abs(j - y4);
		ans = max(s2, max(s3, s1));
	}

	if (s1 == ans)
		cout << x1 << " " << y1 << endl;

	else if (s2 == ans)
		cout << x2 << " " << y2 << endl;

	else if (s3 == ans)
		cout << x3 << " " << y3 << endl;

	else
		cout << x4 << " " << y4 << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}