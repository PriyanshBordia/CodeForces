#include <iostream>
#include <math.h>

typedef long long ll;

using namespace std;

int main()
{
	int n, bx;
	cin >> n >> bx;

	ll X = 0;
	for (int i = 0; i < n; ++i)
	{ 
		int x;
		cin >> x;

		X += (x * pow(bx, n - i - 1));
	}

	int m, by;
	cin >> m >> by;

	ll Y = 0;
	for (int i = 0; i < m; ++i)
	{ 
		int y;
		cin >> y; 

		Y += (y * pow(by, m - i - 1));
	}

	(X == Y) ? printf("=\n") : ((X > Y) ? printf(">\n") : printf("<\n"));

	return 0;
}