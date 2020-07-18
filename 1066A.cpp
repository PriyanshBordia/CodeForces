#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int L, v, l,r;
		cin >> L >> v >> l >> r;

		int count = L / v - r / v + (l - 1) / v;

		cout << count << endl;
	}

	return 0;
}