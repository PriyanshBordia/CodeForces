#include <iostream>
#include <cstring>
#include <math.h>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	string t;
	cin >> t;

	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] != t[i])
		{
			int a = s[i] - '0';
			int b = t[i] - '0';

			count += min(abs(a - b), 10 - abs(a - b));
		}
	}

	cout << count << endl;

	return 0;
}