#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <vector>
#include <set>
typedef long long ll;
#define scll(x) scanf("%lld", &x);
#define pfll(x) printf("%lld\n", x);
#define scs(s) scanf("%s", &s);
#define pfs(s) printf("%s\n", s);
#define yes printf("YES\n")
#define no printf("NO\n")
using namespace std;

int main()
{
	ll t;
	scll(t)

	ll ans(0);
	while (t--)
	{
		ll n, m;
		cin >> n >> m;

		// int a[n];
		set<int> a;
		for (int i = 0; i < n; i++){ ll x; scll(x); a.insert(x); }

		set<int> b;
		for (int i = 0; i < m; i++){ ll x; scll(x); b.insert(x); }

		int flag = 0;
		for (auto i = a.begin(); i != a.end(); i++)
		{
			ll x = *i;

			if (b.find(x) != b.end())
			{
				flag = 1;
				ans = x;
			}
		}

		if (flag == 1)
		{ 
			yes;
			cout << "1 " << ans << endl;
		}

		else
		 	no;
	}

	return 0;
}