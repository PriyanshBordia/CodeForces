#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int n; cin >> n;

	while (n--)
	{
		int c, sum; cin >> c >> sum;

		if (sum <= c)
			cout << sum << endl;

		else
		{
			if (sum % c == 0)
				printf("%.0f\n", c * pow(sum / c, 2));

			else
			{
				ll ans = (c - sum % c) * pow(sum / c, 2) + (sum % c) * pow(1 + (sum / c), 2);
				printf("%lld\n", ans);
			}
		}
	}
	
	return 0;
}
