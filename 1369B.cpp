#include <iostream>
#include <cstring>

using namespace std;

void solve()
{
	int n; cin >> n;

	string s; cin >> s;

	int x(0), y(0);

	for (int i = 0; i < n; ++i)
	{
		if (s[i] == '0')
			x++;
		else
			break;
	}

	for (int i = n - 1; i >= 0; --i)
	{
		if (s[i] == '1')
			y++;
		else
			break;
	}

	if (x + y < n)
		s = string(x + 1, '0') + string(y, '1');

	cout << s << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--) 
		solve();
	
	return 0;
}