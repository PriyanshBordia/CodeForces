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

		while (true)
		{
			for (int i = 0 ; i < n; i++)
			{
				if (s[i] == 'A' && i + 1 < n)
					s[i + 1] = 'A';
			}

			for (int i = 0; i < n; i++)
			{
				if (s[i] == 'A')
				{
					for (int j = 1)
				}
			}
		}
	}
	return 0;
}