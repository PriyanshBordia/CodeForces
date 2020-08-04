#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string s, t; cin >> s >> t;

	int cnt(1), i(0), j(0);

	while (i < t.size())
	{
		if (s[j] == t[i])
		{
			cnt++;
			j++;
		}
		i++;
	}

	cout << cnt << endl;
	
	return 0;
}