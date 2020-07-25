#include <iostream>
#include <math.h>

typedef unsigned long long ll;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		ll a, b, n; 
		cin >> a >> b >> n;

		ll ans(0);

		if (n % 3 == 0)
			ans = a;

		else if (n % 3 == 1)
			ans = b;

		else
		{
			ans = a ^ b;
		}

		cout << ans << endl;
	}
}
