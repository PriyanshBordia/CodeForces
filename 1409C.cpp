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
	ll d(10000);

	ll n, x, y; cin >> n >> x >> y;
	
	for (ll i = 1; i < n; i++)
	{
		for (ll j = i + 1; j <= n; j++)
		{
			if ((y - x) % (j - i) == 0)
			{
				if (y / ((y - x) / (j - i)) >= n)
				{
					d = (y - x) / (j - i);	

					while (n--)
					{
						cout << y << " ";
						y -= d; 
					}

					cout << endl;
					return;
				}

				else
					d = min(d, (y - x) / (j - i));
			}
		}
	}

	ll temp = x;
	
	while (n-- && temp > 0)
	{
		cout << temp << " ";
		temp -= d; 
	}

	n += 1;
	x += d;

	while (n--)
	{
		cout << x << " ";
		x += d; 
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