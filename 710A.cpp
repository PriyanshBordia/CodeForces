#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int ans = 0;

	if (s[0] == 'a' || s[0] == 'h')
	{
		if (s[1] == '1' || s[1] == '8')
			ans += 3;

		else
			ans += 5;
	}

	else
	{
		if (s[1] == '1' || s[1] == '8')
			ans += 5;

		else
			ans += 8;
	}


	cout << ans << endl;

	return 0;
}