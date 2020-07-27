#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		int n; cin >> n;

		string s, t;

		cin >> s;
		cin >> t;

		if (s.compare(t) == 0)
			cout << "Yes\n";
		
		else
		{
			int cnt(0);
			for (int i = 0; i < n; i++)
			{
				if (s[i] != t[i])
				{
					cnt++;

					for (int j = 0; j < n; j++)
					{
						if (t[i] == t[j] && s[i] == s[j] && i != j)
						{
							char temp = s[i];
							s[i] = t[j];
							t[j] = temp;
						}
					}
				}

				if (cnt > 1)
					break;
			}

			(cnt == 1 && s.compare(t) == 0) ? cout << "Yes\n" : cout << "No\n";
		}
	}

	return 0;
}