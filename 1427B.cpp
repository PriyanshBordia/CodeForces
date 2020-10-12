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


// LWWWW
// WWWWL

// WWLLLLWWLWLWLWLWLWLWLLLLLLLLLLW
void solve()
{
	ll ans(0), cnt(0), cnt2(0), cnt3(0), mx(0), mn(1e09), flag(0), z(0);
	
	ll n, k; cin >> n >> k;

	string s; cin >> s;

	int i = 0; 
	while (i < s.size())
	{
		if (s[i] == 'L' && z == 1)
		{
			flag = 0;

			ll strk(1);
			while (s[++i] == 'L')
				strk++;

			if ((strk - k) >= 0)
			{
				ans += 2 * strk + 1;
				k -= strk;
			}

			else
				cnt++;
		}

		else if (s[i] == 'L')
			cnt++;

		else if (flag == 0) { ans += 1; flag = 1; z = 1; }

		else
			ans += 2;

		i++;
	}
	
	if (k > 0)
	{
		mx = min(cnt, k);
		ans += 2 * mx;
		k -= mx;
	}

	pfll(ans);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
