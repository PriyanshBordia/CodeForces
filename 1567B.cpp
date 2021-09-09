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
	
	ll a, b; cin >> a >> b;

	cnt = a;

	ans = 0;

	for (int i = 1; i < a; i++)
	{
		ans = ans ^ i;
	}

	if (ans != b)
	{		
		for (int i = a + 1; i < 1000000; i++)
		{
			if ((ans ^ i) == b)
			{
				cnt++;
				ans = ans ^ i;
				break;
			}
		}

		if (ans != b)
			cnt += 2;
	}

	cout << cnt << endl;

	return;
}


int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}