#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int a, b;
		cin >> a >> b;

		int ans = 0;
		if ((2 * min(a, b)) < max(a, b))
			ans = pow(max(a, b), 2);

		else
			ans = pow(2 * min(a, b), 2);

		cout << ans  << endl;
	}
	return 0;
}