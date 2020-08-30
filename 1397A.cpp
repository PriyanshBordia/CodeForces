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
	ll n; cin >> n;


	int alpha[26] = { 0 };
	for (int i = 0; i < n; i++)
	{
		string s; cin >> s;

		for (int j = 0; j < s.size(); j++)
		{
			alpha[s[j] - 'a']++; 
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (alpha[i] % n != 0)
		{
			no;
			return;
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