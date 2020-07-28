#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		string s; cin >> s;

		string t(1, s[0]);

		int j = 1;
		while (j < s.size())
		{
			t += s[j];
			j += 2;
		}

		cout << t << endl;
	}

	return 0;
}