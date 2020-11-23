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
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	ll n, q; cin >> n >> q;

	string s; cin >> s;

	while (q--)
	{
		int l, r; cin >> l >> r;

		if ((r - l + 1) >= 2)
		{
			int flag(0);
			for (int i = 0; i < l - 1; i++)
			{
				if (s[i] == s[l - 1])
				{
					yes; flag = 1;
					break;
				}
			}

			for (int i = r; i < s.size() && flag != 1; i++)
			{
				if (s[i] == s[r - 1])
				{
					yes; flag = 1;
					break;
				}
			}

			if (flag == 0)
				no;
		}

		else
			no;
	}
	
	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}