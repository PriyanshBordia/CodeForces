#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;

	int m[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	int a[n];
	for (int i = 0; i < n; ++i)
	{ 
		cin >> a[i]; 

		if (a[i] == 29)
			m[1] = 29;
	}

	for (int i = 0; i < 24; i++)
	{
		if (m[i] == a[0])
		{
			int flag = 1;
			int k = i;
			for (int j = 0; j < n; j++)
			{
				if (a[j] != m[k])
					flag = 0;

				k = (k + 1) % 24;
			}
			
			if (flag)
			{
				cout << "YES\n";
				return 0;
			}
		}
	}

	cout << "NO\n";

	return 0;
}