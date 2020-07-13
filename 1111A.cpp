#include <iostream>
#include <cstring>

using namespace std;

int isVowel(char c)
{
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return 1;

	else
		return 0;
}

int main()
{
	string s;
	cin >> s;

	string t;
	cin >> t;

	if (t.size() != s.size())
		cout << "NO\n";


	else
	{
		int i = 0;
		while (i < s.size())
		{
			if (isVowel(s[i]) && isVowel(t[i]));


			else if (!isVowel(s[i]) && !isVowel(t[i]));

			else
			{
				cout << "NO\n";
				return 0;
			}

			i++;
		}

		cout << "YES\n";
	}


	return 0;
}