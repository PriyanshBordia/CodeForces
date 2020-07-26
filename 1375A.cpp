#include <iostream>
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

		int a[n];
		for (int i = 0; i < n; i++){ scanf("%d", &a[i]); }

		for (int i = 0; i < n; ++i)
		{
			if (i & 1)
				a[i] = abs(a[i]);

			else 
				a[i] = abs(a[i]) * - 1;
		}

		for (int i = 0; i < n; ++i){ printf("%d ", a[i]); }

		printf("\n");
	}		
	
	return 0;
}

