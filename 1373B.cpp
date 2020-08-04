#include <iostream>
#include <cstring>

using namespace std;

void solve()
{
	string s; cin >> s;

	int flag(1);

	int cnt(0);
	while (flag && s.size() > 0)
	{
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] != s[i + 1] && i + 1 < s.size())
			{
				s.erase(s.begin() + i);
				s.erase(s.begin() + i);
				flag = 1;
				cnt++;
				break;
			}
			
			else
				flag = 0;
		}
	}

	(cnt & 1) ? cout << "DA\n" : cout << "NET\n";

	return;
}

int main()
{
	int t; cin >> t;

	while (t--)
		solve();

	return 0;
}
