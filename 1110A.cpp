#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	ll b, k;
	cin >> b >> k;

	signed long long int n = 0;
	
	for (int i = k - 1; i >= 0; i--)
	{
		ll a;
		cin >> a;

		if ((b % 2 == 1) && (a % 2 == 1))
			n += 1;

		n %= 2;
	}

	(n == 1) ? cout << "odd\n" : cout << "even\n";

	return 0;
}