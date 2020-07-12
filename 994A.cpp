#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int a[n];
	for (int i = 0; i < n; i++){ cin >> a[i]; }

	int f[m];
	for (int i = 0; i < m; i++){ cin >> f[i]; }

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i] == f[j])
			{
				cout << a[i] << " ";
			}
		}
	}

	cout << endl;
	
	return 0;
}