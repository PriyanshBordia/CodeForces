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
	ll ans(0), sum(0), mx(-1), mn(1e18);
	
	ll n, q; cin >> n >> q;

	string s; cin >> s;

	vector<ll> cnt(n + 2, 0);

	cnt[0] = 0;
	// for (ll i = 1; i <= n; i++)
	// {
	// 	if (s[i - 1] == '+')
	// 		cnt[i] = cnt[i - 1] + 1;
	// 	else
	// 		cnt[i] = cnt[i - 1] - 1;
	// }

	for (ll i = 1; i <= n; i++)
	{
		cnt[i] = cnt[i - 1];

		if (s[i - 1] == '+')
			cnt[i] += (i & 1) ? 1 : -1;

		else
			cnt[i] += (i & 1) ? -1 : 1;
	}

	while (q--)
	{
		ll l, r; cin >> l >> r;

		if ((cnt[r] - cnt[l - 1]) < 0)
		{
			for (int i = r; ans > 0 and i >= l; i--)
			{
				if (s[i - 1] == '-')
				{
					// cout << i << " ";
					for(int j = i + 1; j < cnt.size(); j++)
						cnt[j]++;

					cnt.erase(cnt.begin() + i);
					s.erase(s.begin() + i - 1);
					ans--;
				}
			}

			cout << s << endl;
		}

		if ((cnt[r] - cnt[l - 1]) > 0)
		{
			for (int i = r; ans > 0 and i >= l; i--)
			{
				if (s[i - 1] == '+')
				{
					// cout << i << " ";
					for(int j = i + 1; j < cnt.size(); j++)
						cnt[j]--;

					cnt.erase(cnt.begin() + i);
					s.erase(s.begin() + i - 1);
					ans--;
				}
			}
			cout << s << endl;
		}

		ans = abs(cnt[r] - cnt[l - 1]);

		cout << ans << endl;
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