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
	ll n, k; cin >> n >> k;

	string s; cin >> s;

	for (int i = 1; i < n; i++)
	{
		if (s[i] >= s[0])
		{
			// mn = i;
			s = s.substr(0, i);
			break;
		}
	}


	// while (s.size() > 1 and s[0] <= s[s.size() - 1])
	// 	s.erase(s.end() - 1, s.end());
	
	string t = s;
	n = s.size();
	for (int i = 1; i <= k / n; i++)
		t = t + s;

	cout << t.substr(0, k) << endl;

	return;
}

int main()
{
	ll t = 1;
	
	while (t--)
		solve();

	return 0;
}