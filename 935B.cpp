#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int ans = 0;

	string s;
	cin >> s;

	int x = 0;
	int y = 0; 
	for (int i = 0; i < s.size(); i++)
	{
		if (x == y && i != 0)
		{
			if (s[i - 1] == 'R' && s[i] == 'U' || s[i - 1] == 'U' && s[i] == 'R');

			else
				ans++;
		}

		(s[i] == 'R') ? x += 1 : y += 1;
	}
	
	cout << ans << endl;
	return 0;
}