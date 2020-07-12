#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	string s;
	cin >> s;

	string t = s.substr(0, n);
	string r = s.substr(n, n);

	sort(t.begin(), t.end());
	sort(r.begin(), r.end());

	int flag = -1;

	if (t[0] < r[0])
		flag = 1;

	else if (t[0] > r[0])
		flag = 2;

	else
	{
		cout << "NO" << endl;
		return 0;
	}


	for (int i = 1; i < n; ++i)
	{
		// cout << t << " " << r << endl;

		if (flag == 1)
		{	
			if (t[i] >= r[i])
			{
				cout << "NO" << endl;
				return 0;
			}
		}

		else if (flag == 2)
		{
			if (t[i] <= r[i])
			{	
				cout << "NO" << endl;
				return 0;
			}
		}

		else
		{
			cout << "NO" << endl;
			return 0;
		}
	}


	cout << "YES" << endl;

	return 0;
}