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
	
	ll n; cin >> n;

	ll a[n]; for (int i = 0; i < n; i++) cin >> a[i];
	ll b[n]; for (int i = 0; i < n; i++) cin >> b[i];

	int sumA = 0, sumB = 0;
	for (ll i = 0; i < n; i++)
	{
		sumA += a[i];
		sumB += b[i];
	}
	
	if (sumA != sumB)
	{
		cout <<  "-1\n";
	}
	
	else
	{
		int i = 0;
		vector<int> x;
		vector<int> y;
		while (i < n)
		{
			while (a[i] != b[i] and i < n)
			{
				for (int j = i + 1; j < n; j++)
				{
					if (a[i] < b[i] and a[j] > b[j] and a[j] >= 1)
					{
						a[i] += 1;
						a[j] -= 1;
						x.push_back(j + 1);
						y.push_back(i + 1);
						cnt++;						
					}

					else if (a[i] > b[i] and a[j] < b[j] and a[i] >= 1) 
					{
						a[i] -= 1;
						a[j] += 1;
						x.push_back(i + 1);
						y.push_back(j + 1);
						cnt++;
					}
				}

			}

			i++;
		}

		cout << cnt << endl;

		for (int k = 0; k < x.size(); k++)
			cout << x[k] << " " << y[k] << endl;
	}

	return;
}

// 3 1 2 3
int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}