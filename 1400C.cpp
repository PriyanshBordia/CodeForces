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
	string s; cin >> s;

	ll x; scll(n);

	char w[s.size()];
	for (int i = 0; i < s.size(); i++)
	{
		w[i] = '2';
	}

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == '0')
		{
			if (i - x >= 0)
				w[i - x] = '0';

			if (i + x < s.size())
				w[i + x] = '0';
		}

		else
		{
			if (i - x >= 0 && s[i - x] == '0' && i + x < n && s[i + x] == '0')
			{
				cout << "-1\n";
				return;
			}

			if (i - x >= 0 && s[i - x] != '0')
				s

			if (i + x < n || s[i + x] == '0')
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