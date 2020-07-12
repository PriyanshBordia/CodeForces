#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>

using namespace std;

int main()
{
	int t;
	scanf("%d", &t);

	while (t--)
	{	
		int n;
		scanf("%d", &n);

		// int ans = 0;

		// int count = 0;
		int a[n];
		for (int i = 0; i < n; i++){ scanf("%d", &a[i]); }

		for (int i = n - 1; i > 0; i--)
		{
			if (i % 2 == 0 && (a[i] != a[i - 1]))
			{
				if ((a[i] - a[i - 1]) < 0)
					a[i] *= (-1);
			}


			else if ((i % 2 == 1) && a[i] != a[i - 1])
			{
				if ((a[i] - a[i - 1]) > 0)
					a[i] *= (-1);
			}
		}

		for (int i = 0; i < n; ++i)
		{
			printf("%d ", a[i]);
		}

		printf("\n");
	}		
	
	return 0;
}

