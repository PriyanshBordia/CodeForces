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
	
	ll ans(INT_MAX);
	
	ll m; cin >> m;


	ll sum1[m], sum2[m];

	ll a[2][m]; 
	for (int j = 0; j < m; j++)
	{
		cin >> a[0][j];
		if (j != 0)
			sum1[j] = sum1[j - 1] + a[0][j];
		else
			sum1[j] = a[0][j];
	}

	for (int j = 0; j < m; j++)
	{
		cin >> a[1][j];
		if (j != 0)
			sum2[j] = sum2[j - 1] + a[1][j];
		else
			sum2[j] = a[1][j];
	}

	if (m == 1)
	{
		cout << "0" << endl;
		return;
	}

	// for (ll i = 0; i < m; i++)
	// 	cout << sum1[i] << " " << sum2[i] << endl; 
	
	int z[m];
	for (int i = 0; i < m; i++)
	{
		if (i == 0)
		{
			z[i] = sum1[m - 1] - sum1[0];
		}

		else if (i == (m - 1))
		{
			z[i] = sum2[m - 2];
		}

		else
		{
			z[i] = max(sum2[i - 1], sum1[m - 1] - sum1[i]);
		}

		// cout << z[i] << " ";

		ans = min(ans, ll(z[i]));
	}

	// cout << endl;



	// int k = m;
	// while (k > 0 and sum1[k - 1] > sum2[k - 1])
	// {
	// 	k--;
	// }

	// cout << k << " ";

	// if (k == m)
	// {
	// 	ans = sum2[m - 1];
	// }

	// else if (k - 1 >= 0)
	// 	ans = max(sum2[k - 1], sum1[m - 1] - sum1[k]);
	// else
	// 	ans = sum1[m - 1] - sum1[0];

	pfll(ans);

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}