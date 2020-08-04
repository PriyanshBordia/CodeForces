#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
	int t; scanf("%d", &t);

	while (t--)
	{
		ll a, b, c; scanf("%lld %lld %lld", &a, &b, &c);

		(a < c) ? printf("1 ") : printf("-1 ");

		(c < (a * b)) ? printf("%lld\n", b) : printf("-1\n");
	} 

	return 0;
}