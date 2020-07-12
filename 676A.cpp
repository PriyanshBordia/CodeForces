#include <iostream>

#define sc(x) scanf("%d", &x);
#define scll(x) scanf("%lld", &x)

#define pf(x) printf("%d\n", x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	int n;
	sc(n);

	int max = 0;
	int min = n;

	int a[n];
	for (int i = 0; i < n; i++)
	{ 
		sc(a[i]); 

		if (a[i] == 1)
			min = i;

		else if (a[i] == n)
			max = i;
	}

	int ans = 0;
	if (min < max)
	{
		ans = (min > (n - max - 1)) ? (max) : (n - 1 - min);
	}

	else
	{
		ans = (max > (n - min - 1)) ? (min) : (n - 1 - max);
	}

	pf(ans);

	return 0;
}