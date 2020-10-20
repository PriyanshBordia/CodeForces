#include <iostream>
#include <cstring>

typedef long long ll;

using namespace std;

void solve()
{
	ll n; cin >> n;

	int flag(-1);

	char arr[n][n];
	for (int i = 0; i < n; i++)
	{
		string s; cin >> s;

		int t = count(s.begin(), s.end(), '0');

		if (t <= 2)
		{
			for (int j = 0; j < n; ++j)
			{
				if (s[j] == '0')
					cout << i << " " << j << endl;

				flag = 0;
			}

			flag = 0;
		}

		t = count(s.begin(), s.end(), '1');

		if (t <= 2)
		{
			for (int j = 0; j < n; ++j)
			{
				if (s[j] == '0')
					cout << i << " " << j << endl;

				flag = 0;
			}

			flag = 1
		}
	}

	return;
}

int main()
{
	ll t = 1; cin >> t;

	while (t--)
		solve();

	return 0;
}