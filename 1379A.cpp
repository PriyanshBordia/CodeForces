#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>

#define yes printf("YES\n")
#define no printf("NO\n")

using namespace std;

int check(const string s)
{
	int cnt(0);

	const string t = "abacaba";
	for (int i = 0; i <= s.size() - 7; i++)
	{
		if (s.substr(i, 7) == t)
			cnt++;
	}
	
	return (cnt == 1) ? 1 : 0;
}

void solve()
{
	int n; cin >> n;

	string s; cin >> s;

	string t = "abacaba";

	int count(0);
	
	for (int i = 0; i <= n - 7; i++)
	{
		string r = s.substr(i , t.size());

		if (r.compare(t) == 0)
			count++;
	}

	if (count == 1)
	{
		for (int k = 0; k < n; k++)
		{
			if (s[k] == '?')
				s[k] = 'd';
		}

		yes;
		cout << s << endl;
		return;
	}

	else if (count > 1)
	{
		no;
		return;
	}

	else
	{
		string s1 = s;
		int i = 0; 
		while (i <= (n - 7) && count == 0)
		{
			string r = s.substr(i , t.size());

			for (int j = 0; j < 7; j++)
			{
				if (r[j] == '?')
				{
					if (j == 3)
						r[j] = 'c';

					else if (j % 2 == 0)
						r[j] = 'a';

					else
						r[j] = 'b';
				}
			}

			if (r.compare(t) == 0)
			{
				for (int j = 0; j < 7; j++)
				{
					if (s[i + j] == '?')
					{
						if (j == 3)
							s[i + j] = 'c';

						else if (j % 2 == 0)
							s[i + j] = 'a';

						else
							s[i + j] = 'b';
					}
				}

				if (check(s))
				{
					count++;

					for (int k = 0; k < n; k++)
					{
						if (s[k] == '?')
							s[k] = 'd';
					}
					
					break;
				}

				else
					s = s1; 
			}

			i++;
		}

		if (count == 1)
		{
			count = 0;
			for (int i = 0; i <= n - 7; i++)
			{
				string r = s.substr(i , t.size());

				if (r.compare(t) == 0)
					count++;
			}

			if (count == 1)
			{
				yes;
				cout << s << endl;
			}
			
			else
				no;
		}

		else
			no;

		return;
	}
}

int main()
{
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
