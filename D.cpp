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
	set<ll> s;

	ll cnt(0);
	ll zer[n + 1];

	ll n; cin >> n;
	
	ll a[n + 1]; for (ll i= 1; i <= n; i++) cin >> a[i];

	ll i = 1;
	for (i = 1; i <= n; i++)
	{
		if (i - 1 > 0 && a[i - 1] != a[i])
			break;
		zer[i] = 0;
	} 

	if (i > n)
		no;

	else
	{
		yes;
		for (i = 1; i <= n && cnt < n - 1; i++)
		{
			if (i - 1 > 0 && a[i - 1] != a[i])
			{
				if (s.find(a[i]) == s.end())
				{
					cout << i - 1 << " " << i << endl;
					cnt++;

					s.insert(a[i]);
					s.insert(a[i - 1]);
				}
			}
		}

		for (i = 1; i <= n && cnt < n - 1; i++)
		{
			if (i - 1 > 0 && a[i - 1] != a[i])
			{
				cout << i + 1 << " " << i << endl;
				cnt++;
			}
		}


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