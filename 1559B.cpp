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

int val(string s, int i, int cnt)
{
	if (i - 1 >= 0 and s[i] == s[i - 1])
		cnt++;

	if (i + 1 < s.size() and s[i] == s[i + 1])
		cnt++;

	return cnt;
}

string dp(string s, int i, int cnt)
{
	if (i >= s.size())
		return s;


	if (s[i] == '?')
	{
		s[i] = 'B';
		dp(s, i + 1, cnt);

		s[i] = 'R';
		dp(s, i + 1, cnt);

		if (b < r)
		{
			s[i] = 'B';
			cnt = r;
		}

		else
			cnt = b;
	}

	return dp(s, i + 1, cnt);
}
// brbrbbr
void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0);

	int cnt(0);
	
	ll n; cin >> n;
	
	string s; cin >> s;

	for (int i = 1; i < s.size(); i++)
	{
		if ((s[i] == 'R' and s[i - 1] == 'R') or (s[i] == 'B' and s[i - 1] == 'B'))
			cnt++;
	}

	s = dp(s, 0, cnt);

	cout << s << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}