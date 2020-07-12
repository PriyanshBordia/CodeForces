#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string s;
	cin >> s;

	for (int i = s.size() - 1; i >= 0; i--)
	{
		int d = int(s[i] - '0');

		if (d < 5)
			cout << "O-|";

		else
		{
			cout << "-O|";
			d -= 5;
		}

		for (int j = 0; j < 5; j++)
		{
			if (d == 0)
				cout << "-";

			else
				cout << "O";

			d--;
		}

		cout << endl;
	}
}