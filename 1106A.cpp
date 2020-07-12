#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n;
	cin >> n;

	char a[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
	
	int count = 0;

	if (n < 3);
	
	else 
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (a[i][j] == 'X' && i > 0 && i < (n - 1) && j > 0 && j < (n - 1))
				{
					if (a[i - 1][j - 1] == 'X' && a[i - 1][j + 1] == 'X' && a[i + 1][j - 1] == 'X' && a[i + 1][j + 1] == 'X')
						count++;
				}
			}
		}
	}

	cout << count << endl;
	return 0;
}