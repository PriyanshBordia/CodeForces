#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		string s; cin >> s;

		int flag(1);
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == '?' && i == 0)
			{
				if (s[i + 1] != 'a')
					s[i] = 'a';
				
				else if (s[i + 1] != 'b')
					s[i] = 'b';

				else if (s[i + 1] != 'c')
					s[i] = 'c';
			}

			else if (s[i] == '?' && i == s.size())
			{
				if (s[i - 1] != 'a')
					s[i] = 'a';
				
				else if (s[i - 1] != 'b')
					s[i] = 'b';

				else if (s[i - 1] != 'c')
					s[i] = 'c';
			}
			
			else if (s[i] == '?')
			{
				if (s[i - 1] != 'a' && s[i + 1] != 'a')
					s[i] = 'a';
				
				else if (s[i - 1] != 'b' && s[i + 1] != 'b')
					s[i] = 'b';

				else if (s[i - 1] != 'c' && s[i + 1] != 'c')
					s[i] = 'c';

				else
					s[i] = 'a';
			}

			else if (i + 1 < s.size() && s[i] == s[i + 1])
			{
				flag = 0;
				break;
			}
		}

		(flag) ? cout << s << endl : cout << "-1\n"; 
	}

	return 0;
}