#include <iostream>

#define sc(x) scanf("%d", &x);

#define pf(x) printf("%d\n", x);

using namespace std;

int main()
{
	int n;
	sc(n);

	int a[n + 1];
	for (int i = 1; i <= n; i++){ sc(a[i]); }

	int m;
	sc(m);

	while (m--)
	{
		int x, y; 
		sc(x);
		sc(y);

		if (x == 0)
			a[1] += a[0] - y;

		else if (x == n)
			a[n - 1] += y - 1;

		else
		{
			a[x - 1] += y - 1;
			a[x + 1] += a[x] - y;
		}

		a[x] = 0;
	}

	for (int i = 1; i <= n; ++i){ pf(a[i]); }
	
	return 0;
}