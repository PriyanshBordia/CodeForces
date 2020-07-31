#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		string s; cin >> s;

		int a[26] = { 0 }; 
		for (int i = 0; i < s.size(); ++i) 
		{			
			if (s[i] == s[i + 1] && i + 1 < s.size())
				i++; 

			else
				a[s[i] - 'a'] = 1;
		}

		for (int i = 0; i < 26; ++i)
		{
			if (a[i] == 1)
				cout << char(i + 'a');
		}

		cout << endl;
	}

	return 0;
}