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
	ll n, x; cin >> n >> x;

	string s; cin >> s;

	string t;
	for (int i = 1; i <= n; i++)
	{
		t = s.substr(0, i);

		int k = 0; bool flag = false;
		for (int j = i; j < n; j++)
		{
			if (s[j] < t[k])
			{
				flag = true;
				break;
			}

			else if (s[j] > t[k])
			{
				flag = false;
				break;
			}

			else
			{
				if (k == t.size() - 1)
					k = 0;
				else 
					k++;
			}
		}

		if (flag)
		{
			cout << t << endl;
			break;
		}
	}

	while (t.size() < x)
		t += t;

	cout << t.substr(0, x) << endl;

	return;
}

int main()
{
	ll t = 1;
	
	while (t--)
		solve();

	return 0;
}