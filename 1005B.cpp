#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	string s, t;
	
	cin >> s;
	cin >> t;

	int k = s.size() - 1;
	int p = t.size() - 1;
	
	while (k >= 0 && p >= 0)
	{
		if (s[k] != t[p])
		{
			k++; p++;
			break;
		}

		k--; p--;
	}

	if (k >= 0 && p == -1)
	{
		cout << k + 1 << endl;
	}

	else if (p >= 0 && k == -1)
	{
		cout << p + 1 << endl;
	}

	else
		cout << max(k, 0) + max(p, 0) << endl;

	return 0;
}
