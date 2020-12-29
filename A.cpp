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
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1000000000);
	
	string s; cin >> s;

	if (s.size() & 1)
	{
		no;
		return;
	}

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(' || s[i] == '?')
		{
			cnt++;
		}

		else if (s[i] == ')')
		{
			cnt--;

			if (cnt < 0)
			{
				no; 
				return;
			}
		}
	}
	
	yes;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
