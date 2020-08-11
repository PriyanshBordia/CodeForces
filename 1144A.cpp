#include <iostream>
#include <cstring>
#include <algorithm>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

void solve()
{
	string s; cin >> s;

	sort (s.begin(), s.end());

	char c(s[0]);
	for (int i = 1; i < s.size(); ++i)
	{
		if (char(s[i] - 1) != c)
		{
			no;
			return;
		}

		c = s[i];
	}

	yes;

	return;
}

int main()
{
	int n; cin >> n;

	while (n--)
		solve();
	
	return 0;
}
