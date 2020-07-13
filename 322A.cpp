#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	if (n < m)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= m; j++)
				cout << i << " " << j << endl;
		} 
	}

	else 
	{
		cout << n * m - 1<< endl;

		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= m; j++)
				cout << i << " " << j << endl;
		}
	}

	return 0;
}