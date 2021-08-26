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

int isPrime(int x)
{
	if (x == 2)
		return 1;

	else if (x == 1 || x % 2 == 0)
		return 0;
	
	else
	{
		for (int i = 3; i <= sqrt(x); i += 2)
		{
			if (x % i == 0)
				return 0;
		}
		
		return 1;
	}
}

void solve()
{
	vector<ll> v;	set<ll> st;		map<ll, ll> mp;
	
	ll ans(0), sum(0), cnt(0), mx(-1), mn(1e18);
	
	ll k; cin >> k;
	
	string s; cin >> s;

	for (int i = 0; i < k; i++)
	{
		int c = int(s[i] - '0');
		if (c == 1 or c == 9 or (c % 2 == 0 and c != 2))
		{
			cout << 1 << endl;
			cout << c << endl;
			return;
		}
	}

	for (int i = 0; i < k; i++)
	{
		int c = int(s[i] - '0') * 10;
		for (int j = i + 1; j < k; j++)
		{
			int d = c + (s[j] - '0');
			if (!isPrime(d))
			{
				cout << 2 << endl;
				cout << d << endl;
				return;
			}
		}
	}	

	for (int i = 0; i < k; i++)
	{
		int c = int(s[i] - '0') * 100;
		for (int j = i + 1; j < k; j++)
		{
			int d = (c + (s[j] - '0')) * 10;

			for (int z = j + 1; z < k; z++)
			{
				int e = d + (s[z] - '0');
				if (!isPrime(e))
				{
					cout << 3 << endl;
					cout << d << endl;
					return;
				}
			}
		}
	}	

	// cout << 0 << endl << endl;

	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}