#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;

	string t;
	cin >> t;

	char p[s.size()];

	int count = 0;
	for (int i = 0 ; i < s.size(); i++)
	{
		if (s[i] != t[i])
		{
			count++;

			if (count % 2 == 0)
				p[i] = s[i];
			
			else
				p[i] = t[i];
		}

		else
			p[i] = s[i];
	}

	if (count % 2 == 0)
	{
		for (int i = 0; i < s.size(); i++)
			cout << p[i];
	
		cout << endl;
	}

	else
		cout << "impossible" << endl;

	return 0;
}