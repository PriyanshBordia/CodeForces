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
	
	ll ans(4), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	ll n; cin >> n;

	if (n > 2)
		ans = (n - 1) * 2;

	while (cnt < n)
	{
		int flag = 0;
		for (int i = 0; i < v.size(); i++)
		{
			if (ans % v[i] == 0)
			{
				flag = 1;
				break;
			}
		}
		
		if (!flag)		
		{
			cout << ans << " ";
			cnt++;
			v.pb(ans);
		}

		ans += 2;
	}
	
	cout << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}