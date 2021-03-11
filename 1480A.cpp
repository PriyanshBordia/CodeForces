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

	int alice(1), bob(0);
	for (int i = 0; i < s.size(); i++)
	{
		if (alice & 1)
		{
			s[i] = (s[i] == 'a') ? 'b' : 'a';
			alice = 0; bob = 1;
		}

		else if (bob & 1)
		{
			s[i] = (s[i] == 'z') ? 'y' : 'z';
			bob = 0; alice = 1;
		}
	}
	
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
