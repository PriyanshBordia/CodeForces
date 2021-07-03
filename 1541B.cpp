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

int dp(int a[], int i, int j, vector<int> &mem)
{
	if (i > n or j > n or i >= j)
		return 0;

	if (mem[i + j] == -1)
	{
		mem[i + j] = dp(a, i + 1, j - 1, mem) + 
	}

	return mem[i + j];
}

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	ll a[n + 1]; for (int i = 1; i <= n; i++) cin >> a[i];

	for (ll i = 1; i <= n; i++)
	{
		for (int j = i + 1; j <= n; j++)
		{
			if (a[i] * a[j] == (i + j))
				ans++;
		}
	}
	
	vector<ll> mem(2 * n + 1, -1);

	ans = dp(a, 1, 2, mem);

	pfll(ans);

// 3 1 7 4 6 9 12

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}