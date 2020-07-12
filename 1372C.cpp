#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++){ cin >> a[i]; }

		int count = 0;
		int j = n - 1;

		while (j >= 0)
		{
			if (a[j] != j + 1)
			{
				count++;

				int i = j; 
				while (i > 0)
				{
					if (a[i] != i + 1)
						swap(a[i], a[a[i] - 1]);

					else 
						swap(a[i], a[i - 1]);

					i--;
				}
			}

			else
				j++;
		}

		cout << count << endl;
	}
	
	return 0;
}
