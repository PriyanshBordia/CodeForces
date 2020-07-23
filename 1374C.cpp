#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		string s;
		cin >> s;

		int steps = 0;

		int bal = 0;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(')
				bal++;

			else 
			{
				--bal;

				if (bal < 0)
				{
					bal = 0;
					steps++;
				}
			}
		}

		cout << steps << endl;
	}

	return 0;
}