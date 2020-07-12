#include <iostream>
#include <math.h>
#include <algorithm>

typedef long long ll;

#define sci(x) scanf("%d", &x);
#define pfi(x) printf("%d\n", x);

using namespace std;

int main()
{
	int n, k;
	sci(n)
	sci(k)

	int pockets = 0;

	for (int i = 0; i < n; i++)
	{
		float x;
		scanf("%f", &x);

		pockets += ceil(x / k);
	}

	pockets = ceil(pockets / 2.0);

	pfi(pockets);

	return 0;
}