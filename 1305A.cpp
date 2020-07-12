#include <iostream>
#include <algorithm>

typedef long long ll;

#define sc(x) scanf("%d", &x);
#define scll(x) scanf("%lld", &x);

#define pf(x) printf("%d ", x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	int t;
	sc(t)

	while (t--)
	{
		int n;
		sc(n)

		int a[n];
		for (int i = 0; i < n; i++){ sc(a[i]) }

		int b[n];
		for (int i = 0; i < n; i++){ sc(b[i]) }

		sort(a, a + n);
		sort(b, b + n);

		for (int i = 0; i < n; i++)
			pf(a[i])

		printf("\n");

		for (int i = 0; i < n; i++)
			pf(b[i])

		printf("\n");

	}
	
	return 0;
}
