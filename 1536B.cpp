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

	string s; cin >> s;

	int ch1[26];
	int ch2[26][26];
	int ch[26][26][26];

	for (int i = 0; i < 26; i++)
		ch1[i] = 0;

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < 26; j++)
			ch2[i][j] = 0;
	}


	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			for (int k = 0; k < 26; k++)
				ch[i][j][k] = 0; 
		}
	}

	for (int i = 0; i < n; i++)
	{
		ch1[s[i] - 'a']++;

		if (i + 1 < n)
		{
			ch2[s[i] - 'a'][s[i + 1] - 'a']++;

			if (i + 2 < n)
			{
				ch[s[i] - 'a'][s[i + 1] - 'a'][s[i + 2] - 'a']++;				
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (ch1[i] == 0)
		{
			cout << char(i + 'a') << endl;
			return;
		}

	}

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if (ch2[i][j] == 0)
			{
				cout << char(i + 'a') << char(j + 'a') << endl;
				return;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			for (int k = 0; k < 26; k++)
			{
				if (ch[i][j][k] == 0)
				{
					cout << char(i + 'a') << char(j + 'a') << char(k + 'a') << endl;
					return;
				}
			}
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