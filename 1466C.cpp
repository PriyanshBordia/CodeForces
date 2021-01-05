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
	
	string s; cin >> s;

	ll n = s.size();
	for (int i = 0; i < n; i++)
	{
		if (i + 1 < n && i + 2 < n && (s[i + 1] == s[i] && s[i] == s[i + 2] && s[i + 1] == s[i + 2]))
		{
			s[i + 1] = char(cnt % 10 + '0'); cnt++;
			s[i + 2] = char(cnt % 10 + '0'); cnt++;
		}

		else if (i + 1 < n && i - 1 >= 0 && s[i + 1] == s[i - 1])
		{
			// cout << i << " ";
			s[i + 1] = char(cnt % 10 + '0');
			cnt++;
		}

		else if (i + 1 < n && s[i + 1] == s[i])
		{
			// cout << i << " ";
			s[i + 1] = char(cnt % 10 + '0');
			cnt++;
		}
	}
	
	// cout << s << endl;
	pfll(cnt);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}