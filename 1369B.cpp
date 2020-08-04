#include <iostream>
#include <cstring>

using namespace std;

void solve()
{
	int n; cin >> n;

	string s; cin >> s;

	int i = s.size() - 1; 
	while (i >= 0)
	{
		if (s[i] == '0' && s[i - 1] == '1' && (i - 1 >= 0))
		{
			if (i + 1 < n && s[i + 1] == '0')
			{
				s.erase(s.begin() + i);
			}

			else
			{
				s.erase(s.begin() + i - 1);
				i--;
			}

			// cout << i << " " << s << endl;
		}

		else
			i--;
	}

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