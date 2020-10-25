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
	ll ans(0), sum(0), cnt(0), mx(0), mn(100000000);
	
	ll prefix[n + 1];

	vector<ll> v;

	int flag(1)
;	int n; cin >> n;

	for (int i = 0; i < 2 * n; i++)
	{
		char c; cin >> c;

		if (flag)
		{	
			if (c == '-')
			{
				ll x; cin >> x;

				if (cnt > 0)
				{
					v.pb(x);
					prefix[x] = -1;
				}

				if (v.size() <= 0)
					flag = 0;

				cnt--;
			}

			else
			{
				cnt++;
			}
		}
	}
	
	if (!flag)
		no;
	else
	{yes;

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}

	cout << endl;
}
	return;
}

int main()
{
	ll t = 1; //scll(t);
	
	while (t--)
		solve();

	return 0;
}

