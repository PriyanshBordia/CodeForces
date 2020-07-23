#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		ll r, g, b;
		cin >> r >> g >> b;

		int flag = 0;

		if (r >= g && r >= b && (r - g - b) <= 1)
			flag = 1;

		else if (g >= r && g >= b && (g - r - b) <= 1)
			flag = 1;

		else if (b >= r && b >= g && (b - r - g) <= 1)
			flag = 1;

		(flag & 1) ? printf("Yes\n") : printf("No\n");
	}

	return 0;
}