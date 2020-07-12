#include <iostream>
#include <math.h>

typedef long long int ll;

#define sc(x) scanf("%d", &x);
#define scll(x) scanf("%lld", &x)

#define pf(x) printf("%d\n", x);
#define pfll(x) printf("%lld\n", x);

using namespace std;

int main()
{
	ll A, B;
	scll(A);
	scll(B);

	ll x, y , z;
	scll(x);
	scll(y);
	scll(z);

	ll a = (2 * x) + y - A;
	ll b = (3 * z) + y - B;

	if (a < 0)
		a = 0;

	if (b < 0)
		b = 0;

	pfll(a + b);

	return 0;
}