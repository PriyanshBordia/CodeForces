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

	int j = n - 2;
	while (j >= 0)
	{
		cout << s[j];
		j -= 2;
	}

	(j == 0) ? j = 1 : j = 0;

	while (j < n)
	{
		cout << s[j];
		j += 2;
	}

	cout << endl;

	return 0;
}
