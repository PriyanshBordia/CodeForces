#include <iostream>

using namespace std;

void solve()
{
	int n; cin >> n;

	string s; cin >> s; 

	int odd(0), even(0);
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0 && (s[i] - '0') & 1)
			odd++;

		else if (i & 1 && (s[i] - '0') % 2 == 0)
			even++;
	}

	int ans(-1);

	if (n & 1)
		ans = (odd == 0) ? 2 : 1;
	
	else if (n % 2 == 0)
		ans = (even == 0) ? 1 : 2;

	cout << ans << endl;

	return;
}

int main()
{
	int t; cin >> t;
	
	while (t--)
		solve();

	return 0;
}