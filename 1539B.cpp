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
	ll cnt = 0;

	ll n, q; cin >> n >> q;

	string s; cin >> s;

	ll sum[n + 1]; sum[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		sum[i] = sum[i - 1] + int(s[i - 1] - 'a') + 1;
		// cout << sum[i] << " ";
	}

	// cout << endl;

	while (q--)
	{
		int l, r; cin >> l >> r;
		
		cout << sum[r] - sum[l - 1] << endl;
	}
	
	return;
}

int main()
{
	// ll t = 1; //scll(t);
	
	// while (t--)
		solve();

	return 0;
}