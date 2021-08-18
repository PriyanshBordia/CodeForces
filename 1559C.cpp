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
	
	ll ans(0), sum(0), cnt(-1), mx(-1), mn(1e18);
	
	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 0; i < n - 1; i++)
	{
		if (!a[i] && a[i + 1])
		{
			cnt = i + 1;
			break;
		}

		else if (i + 1 == n and a[i] == 0)
		{
			cnt = i + 1;
			break;
		}
	}

	if (a[0] == 1)
	{
		cout << n + 1 << " ";

		for (int i = 1; i <= n; i++)
			cout << i << " ";
		cout << endl;
		return;
	}

	if (cnt == -1)
	{
		cout << cnt << endl;
		return;
	}

	for (int i = 1; i <= cnt; i++)
		cout << i << " ";

	cout << n + 1 <<  " ";

	for (int i = cnt + 1; i <= n; i++)
		cout << i << " ";

	
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