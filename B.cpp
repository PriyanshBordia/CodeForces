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

using namespace std;

void solve()
{
	ll n; scll(n);
	
	map<ll, ll> m; 
	for (int i = 1; i <= n; i++) { int a; cin >> a; m[a]++; }
	
	ll q; scll(q);

	while (q--)
	{
		char c; ll x; cin >> c >> x;

		m[x] = (c == '+') ? m[x] + 1 : m[x] - 1; 

		int sq(0), req(0);
		for (auto it = m.begin(); it != m.end(); it++)
		{
			if (it->second >= 4 && sq == 0)
			{
				sq = 1;

				if ((it->second - 4) >= 4 && req != 2) 
					req = 2;

				else if ((it->second - 4) >= 2 && req != 2)
				{
					req = (req == 0) ? 1 : 2;
				}
			}

			else if (it->second >= 4 && req != 2)
				req = 2;
			
			else if (it->second >= 2 && req != 2)
			{
				req = (req == 0) ? 1 : 2;
			}

			if (sq == 1 && req == 2)
				break;
		}

		(sq == 1 && req == 2) ? yes : no;
	}

	return;
}

int main()
{
	ll t = 1; //cin >> t;
	
	while (t--)
	{
		solve();
	}	

	return 0;
}