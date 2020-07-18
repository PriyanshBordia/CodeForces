#include <iostream>
#include <cstring>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	string t;

	if (n % 2 == 1)
	{
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0)
				t = t + s[i];

			else
				t = s[i] + t;
		}
	}

	else
	{
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 1)
				t = t + s[i];

			else
				t = s[i] + t;
		}
	}

	cout << t << endl;

	return 0;
}
