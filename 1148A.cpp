#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long long int a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);

	long long ans = 2 * (c + min(a, b));

	int minimum = min(a, b);
	a -= minimum;
	b -= minimum;

	if (a > 0 || b > 0)
		ans += 1;

	cout << ans << endl;

	return 0;
}