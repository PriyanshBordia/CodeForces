#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int isPrime(int x)
{
	if (x == 2)
		return 1;

	else if (x % 2 == 0)
		return 0;

	for (int i = 3; i <= sqrt(x); i += 2)
	{
		if (x % i == 0)
			return 0;
	}

	return 1;
}

int main()
{
	int t;
	scanf("%d", &t);

	while(t--)
	{	
		int n;
		scanf("%d", &n);

		int even = 0;
		int odd = 0;

		int a[2 * n];
		for (int i = 0; i < 2 * n; i++)
		{ 
			scanf("%d", &a[i]); 

			(a[i] % 2 == 0) ? even++ : odd++;
		}
		
		sort(a, a + 2*n);

		int start = 0;
		int end = 2 * n;

		(isPrime(a[0] + a[1])) ? start = 2 : end = 2 * n - 2;

		for (int i = start; i < end; i += 2) { printf("%d %d\n", a[i], a[i + 1]); }
	}
	
}