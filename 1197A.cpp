#include <iostream>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int n;
		scanf("%d", &n);

		int a[n];
		int second = -1;
		int last = -1;
		for (int i = 0; i < n; ++i) 
		{ 
			scanf("%d", &a[i]); 

			if (a[i] > last)
			{
				second = last;
				last = a[i];
			}

			else if (a[i] == last || (a[i] > second))
			{
				second = a[i]; 
			}
		}

		int steps = min(second - 1, n - 2);

		cout << steps << endl;
	}

	return 0;
}