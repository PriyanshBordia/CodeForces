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

	string s; cin >> s;
	
	ll sum(0);

	ll ans(0);

	
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j <= n - i; j++)
		{
			string t = s.substr(j, i);

			for (int k = j; k < (j + t.size()); k++)
			{
				int x = int(s[k] - '0');
				
				sum += x;
			}
			
			if (sum == i)
				ans++;

			sum = 0;
		}

	}

	cout << ans << endl;

	return;
}

int main()
{
	ll t; cin >> t;
	
	while (t--)
		solve();

	return 0;
}