#include <iostream>
#include <math.h>

typedef signed long long ll;

using namespace std;

int main()
{
	ll n, l, r; cin >> n >> l >> r;

	ll min = n - l + pow(2, l) - 1;

	ll max = (pow(2, r) - 1) + (n - r) * (pow(2, r - 1));
	
	cout << min << " " << max << endl;

	return 0;
}
