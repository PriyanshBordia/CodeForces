#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	int a[10] = { 0 };
	for (int i = 0; i < n; i++)
	{
		if (isdigit(s[i]))
			a[s[i] - '0'] = 0;

		else if (s[i] == 'L')
		{
			for (int j = 0; j < 10; j++)
			{
				if (a[j] == 0)
				{
					a[j] = 1;
					break;
				}
			}
		}

		else if (s[i] == 'R')
		{
			for (int j = 9; j >= 0; j--)
			{
				if (a[j] == 0)
				{
					a[j] = 1;
					break;
				}
			}
		}
	}

	for (int i = 0; i < 10; i++){ cout << a[i]; }

	cout << endl;
	
	return 0;
}