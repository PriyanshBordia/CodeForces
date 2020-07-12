#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	long long int ans = 0;
	while (n--)
	{
		int count = 0;

		string s;
		cin >> s;

		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '4' || s[i] == '7')
				count++;
		}

		if (count <= k)
			ans++;
	}

	cout << ans << endl;

	return 0;
}