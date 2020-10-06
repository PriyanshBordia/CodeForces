#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <vector>
#include <map>
#include <set>
typedef unsigned long long ll;
#define scll(x) scanf("%lld", &x)
#define pfll(x) printf("%lld\n", x)
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb(x) push_back(x)

using namespace std;

void solve()
{
	string s; cin >> s;

	ll sum(stoi(s));
	for (int len = 1; len < s.size(); len++)
	{
		for (int i = 0; i <= s.size() - len; i++)
		{
			string t = s.substr(i, len);

			cout << t << endl;
			sum -= stoi(t);
		}
	}

	cout << sum << endl;
	
	return;
}

int main()
{
	ll t = 1; //scll(t);
	
	while (t--)
		solve();

	return 0;
}
