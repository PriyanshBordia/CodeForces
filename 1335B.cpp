#include <iostream>
#include <cstring>

using namespace std;

void solve()
{
	int n, a, b; cin >> n >> a >> b;

	string s(n, 'a');

	for (int i = 0; i < n; i++)
	{
		s[i] = char(s[i] + (i % b));
	}

	cout << s << endl;

	return;
}

int main()
{
	int t; cin >> t;

	while (t--) solve();

	return 0;
}
