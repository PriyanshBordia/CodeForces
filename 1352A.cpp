#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		string s; cin >> s;

		int cnt(0);
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] != '0')
				cnt++;
		}

		cout << cnt << endl;

		int i = 0; 
		while (i < s.size())
		{
			cout << (s[i] - '0') * pow(10, s.size() - i - 1);

			i++;
			while (s[i] == '0')
				i++;

			cout << " ";
		}

		cout << endl;
	}

	return 0;
}