#include <iostream>
#include <math.h>

typedef long long ll;

#define sc(x) scanf("%d", &x);
#define pf(x) printf("%d ", x);

using namespace std;

int main()
{
	int n;
	sc(n);

	int a[n] = { 0 };
	for (int i = 0; i < n; i++){ sc(a[i]); }

	int maxH = a[n - 1];
	
	int h[n] = { 0 };
	for (int i = n - 2; i >= 0; i--)
	{
		h[i] = max(0, (maxH + 1 - a[i]));

		if (a[i] > maxH)
			maxH = a[i];
	}

	for (int i = 0; i < n; i++)
		pf(h[i]);

	printf("\n");
	
	return 0;
}