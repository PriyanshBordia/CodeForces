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

	char ch[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				ch[i][j] = 'X';
			else
				ch[i][j] = '.';
		}

	for (int i = 0; i < n; i++)
	{
		if (s[i] == '1')
		{
			for (int j = 0; j < n; j++)
			{
				if (i == j)
					ch[i][j] = 'X';
				
				else if (ch[i][j] == '.' and ch[j][i] == '.')
				{
					ch[i][j] = '=';
					ch[j][i] = '=';
				}

				else if ((ch[i][j] == '+' and ch[j][i] == '-') or (ch[i][j] == '=' and ch[j][i] == '='));

				else
				{
					no;
					return;
				}
			}
		}

		else
		{
			bool flag = false;
			for (int j = 0; j < n; j++)
			{
				if (ch[i][j] == '+')
				{
					flag = true;
					break;
				}
			}

			if (flag)
				continue;

			for (int j = 0; j < n; j++)
			{
				if (i == j)
					ch[i][j] = 'X';

				else if (ch[i][j] == '.' and ch[j][i] == '.' and s[j] != '1') 
				{
					ch[i][j] = '+';
					ch[j][i] = '-';
					flag = true;
					break;
				}
			}

			if (!flag)
			{
				no;
				return;
			}
		}
	}
	
	yes;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (ch[i][j] == '.') 
			{
				ch[i][j] = '='; ch[j][i] = '=';
			}

			cout << ch[i][j];
		}

		cout << endl;
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