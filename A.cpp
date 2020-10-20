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
	ll ans(1), sum(0), cnt(0), mx(0), mn(1e18);
	
	vector<ll> v;	set<ll> st;		map<ll, ll> m;

	ll n; cin >> n;

	// ll a[n + 1]; for (int i = 1; i <= n; i++) cin >> a[i];

	string s;

	s = to_string(n);

	cnt = int(s[0] - '0');

	ans = 10 * (cnt - 1) + s.size() * (s.size() + 1) / 2;

	// if (s.size() == 1)
	// 	ans +=1;
	// else if (s.zi)



	// for (int i = 0; i < s.size(); i++)
	// {
	// 	if (s[i] == );

	// }
	
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
