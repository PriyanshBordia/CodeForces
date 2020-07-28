#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int t; cin >> t;

	while (t--)
	{
		ll a, b, n; cin >> a >> b >> n;
	
		ll count(0);
		while (a <= n && b <= n)
		{
			(a < b) ? a += b : b += a;
			count++;
		}

		cout << count << endl;
	}

	return 0;
}