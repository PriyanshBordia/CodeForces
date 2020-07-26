#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n; cin >> n;

	int a[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}

	int b[3][3] = { 1 };

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; j++)
		{
			while (a[i][j]--)
			{
				if (i - 1 >= 0 && j - 1 >= 0)
				{
					(a[i][j])
			}
		}
	}

	return 0;
}
