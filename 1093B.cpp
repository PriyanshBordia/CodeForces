#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

bool isPalindrome(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != s[s.size() - i - 1])
			return 0;
	}

	return 1;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string s;
		cin >> s;

		if (!isPalindrome(s))
			cout << s << endl;

		else
		{
			int flag = -1;
			string t = s;
			for (int i = 1; i < s.size(); i++)
			{	
				char c = t[0];
				t[0] = t[i];
				t[i] = c;

				if (!isPalindrome(t))
				{
					flag = 1;
					break;
				}

				t = s;
			}

			(flag == 1) ? cout << t << endl : cout << "-1" << endl;
		}
	}

	return 0;
}