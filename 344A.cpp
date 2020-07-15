#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int groups = 0;

	string s = "00";

	while (n--)
	{
		string t;
		cin >> t;

		if (s.compare(t))
			groups++;

		s = t;
	}

	cout << groups << endl;

	return 0;
}