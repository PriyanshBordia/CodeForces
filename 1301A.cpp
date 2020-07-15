#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		string a;
		cin >> a;

		string b;
		cin >> b;

		string c;
		cin >> c;

		for (int i = 0; i < c.size(); i++)
		{
			if (c[i] == a[i])
				swap(c[i], b[i]);

			else
				swap(c[i], a[i]);
		}

		// cout << a << " " << b << endl;
		(a.compare(b) == 0) ? cout << "YES\n" : cout << "NO\n";
	}

	return 0;
}