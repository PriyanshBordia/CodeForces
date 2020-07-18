#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int q;
	cin >> q;

	while (q--)
	{
		string s, t;
		cin >> s; 
		cin >> t;

		int flag = 0;
		for (int i = 0; i < s.size(); i++)
		{
			for (int j = 0; j < t.size(); j++)
			{
				if (s[i] == t[j])
				{
					flag = 1;
					break;
				}
			}

			if (flag)
				break;
		}

		(flag) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}

// if (t[i] == s[i + 1] && (i + 1) < s.size())
// 				s[i] = s[i + 1];

// 			else if (t[i] == s[i - 1] && (i - 1) >= 0)
// 				s[i] = s[i - 1];

// 			else if (s[i] == t[i + 1] && (i + 1) < t.size())
// 				t[i] = t[i + 1];

// 			else if (s[i] == t[i - 1] && (i - 1) >= 0)
// 				t[i] = t[i - 1];
