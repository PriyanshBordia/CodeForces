#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;

	int vol = (l * k) / nl;
	int salt = p / np;

	cout << min(vol, min(salt, d * c)) / n << endl;

	return 0;
}