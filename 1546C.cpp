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
	vector<ll> v;	set<ll> st;	map<ll, ll> mp;
	
	ll ans(0), sum(0), maxpos[1000002];
	
	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];

	ll b[n];
	for (int i = 0; i < n; i++)
	{
		b[i] = a[i];

		maxpos[a[i]] = i;
	}


	sort(b, b + n);

	// for (int i = 0; i < n; i++)
	// 	cout << b[i] << " ";
	// cout << endl;

	int pos[n];
	for (int i = 0; i < n; i++)
		pos[i] = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] != b[i])
		{
			for (int j = 0; j < n; j++)
			{
				if (a[i] == b[j] and pos[j] == 0)
				{
					// cout << a[i] << " " << j << endl;

					if (abs(j - i) & 1)
					{
						if (j + 1 < n and b[j + 1] == a[i])
						{
							if (pos[j + 1] == 0)
							{
								pos[j + 1] = -1;
								break;
							}
						}

						else
						{
							no;
							return;
						}
					}

					else if (pos[j] == 0)
					{
						pos[j] = -1;
						break;
					}

					else
					{
						no;
						return;
					}
				}
			}
		}

		else
		{
			pos[i] = -1;
		}
	}

	yes;

	return;
}
/*
3 3 2 2
3 2 3 2
3 2 2 3
2 3 2 3
2 2 3 3
*/
int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}