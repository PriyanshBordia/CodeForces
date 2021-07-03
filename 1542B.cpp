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
#define yes printf("Yes\n")
#define no printf("No\n")
#define pb(x) push_back(x)

using namespace std;

int dp(ll n, ll a, ll b, vector<int> &mem)
{
	if (n <= 0)
		return mem[0];

	if (mem[n] == -1)
	{
		mem[n] = dp(n - b, a, b, mem);

		if (n % a == 0)
		{
			if (mem[n] == 0)
				mem[n] = dp(n / a, a, b, mem);
		}
	}

	return mem[n];
}


void solve()
{
	ll n, a, b; cin >> n >> a >> b;

	// vector<int> mem(n + 2, -1);

	// mem[0] = 0;
	// mem[1] = 1;

	// int ans = dp(n, a, b, mem);

	// if (mem[n] == 1)
		// yes;

	if (n == 1 or (n % a) == 0 or (n - a) % b == 0 or (n - 1) % b == 0)
	{
		yes;
		return;
	}

	while (n > 0)
	{
		if (n % a == 0)
		{
			// cout << n << endl;
			yes;
			return;
		}

		n -= b;
	}

	no;

	return;
}

// a^2 + a^2b + 2b

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}