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

	vector<int> v;

	int alice(0), cnt(0);
	for (int i = 0; i < s.size(); i++)
	{
		int cnt(0);
		if (s[i] == '1')
		{
			cnt++;

			int j = i + 1;
			while (s[j] == '1')
			{
				cnt++;
				j++;
			}

			i = j;
			v.push_back(cnt);			
		}
	}

	sort (v.rbegin(), v.rend());


	for (int i = 0; i < v.size(); i += 2)
	{
		alice += v[i];
	}

	cout << alice << endl;
	
	return;
}

int main()
{
	ll t = 1; scll(t);
	
	while (t--)
		solve();

	return 0;
}
