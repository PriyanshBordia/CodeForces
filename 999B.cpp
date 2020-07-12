#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			reverse(s.begin(), s.begin() + (i - 1) + 1);
	}

	cout << s << endl;
	return 0;
}