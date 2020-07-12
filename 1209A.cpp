#include <iostream>
#include <math.h>
#include <set>

#define sc(x) scanf("%d", &x);
#define pf(x) printf("%d\n", x);

using namespace std;

int main()
{
	int n;
	sc(n);
	
	set<int> numbers;

	int a[n];	
	for (int i = 0; i < n; i++)
	{ 
		sc(a[i]); 
		numbers.insert(a[i]);
	}

	int count = 0;

	while (!numbers.empty())
	{
		count++;

		int min = *(numbers.begin());

		for (int i = 0; i < n; i++)
		{
			if (a[i] != -1)
			{
				if (a[i] % min == 0)
				{
					numbers.erase(a[i]);
					a[i] = -1;
				}
			}
		}
	}

	// count = max(count, 1);
	pf(count);

	return 0;
}
